#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

void pause(void); /* Pause para que no se cierre el programa y esta a la espera de una tecla */
void cleanc(void); /* Limpia la consola */
void ip_public(void); /* Muestra la IP Publica */
void whoami(void); /* Muestra información del usuario, el grupo y los privilegios del usuario que tiene una sesión iniciada actualmente en el sistema local */
void ip_config_all(void); /* Muestra informacion de la IP local mediante el clasico comando de ipconfig */
void tasks(void); /* Muestra los procesos */
void sysinfo(void); /* Muestra informacion del sistema operativo y demas */
void versionWin(void); /* Muestra la version de Windows */
void allConections(void); /* Muestra las conexiones establecidas y en escucha */
void mac(void); /* Muestra la MAC de la maquina */
void ifaceStatistics(void); /* Muestra las estadisticas de la interfaz */
void route_tables(void); /* Muestra la tabla de enrutamiento */
void drivers(void); /* Muestra los drivers de la maquina */
void cpu(void); /* Muestra informacion del CPU */
void bios(void); /* Muestra informacion de la BIOS */
void memory(void); /* Muestra informacion de la memoria ram */
void services(void); /* Muestra los servicios activos en la maquina */
void config_direc(void); /* Muestra las configuraciones de directiva que se aplicaron en el equipo para el usuario */
void cache_dns(void); /* Muestra los DNS guardados en cache */
void arp_table(void); /* Muestra la tabla ARP de la maquina */
void nbt_cache(void); /* Muestra la cache de nombres NetBIOS */
void users(void); /* Muestra los usuarios de Windows */
void date(void); /* Muestra la fecha de Windows */
void time_zone(void); /* Muestra la zona horaria de Windows */
void bitsadmin_jobs(void); /* Listar trabajos con bitsadmin */
void programs(void); /* Muestra los programas instalados en la maquina */
void all(void); /* Realiza todas las opciones del menu */
void mostrarMenu(void); /* Mostrar menu */
void mainProg(void); /* Programa main para las opciones del menu */

void pause(void){
	printf("\n\nPresione una tecla para continuar...");
	getchar();
}

void cleanc(void){
	system("cls");
}

void ip_public(void){
	cleanc();
	system("curl ifconfig.me/all > logs/ip_public.log");
	printf("[+] Se ha guardado el archivo ip_public.log en la carpeta de logs \n");
	pause();
}

void whoami(void){
	cleanc();
	system("whoami > logs/whoami.log");
	printf("[+] Se ha guardado el archivo whoami.log en la carpeta de logs \n");
	pause();
}

void ip_config_all(void){
	cleanc();
	system("ipconfig /allcompartments /all > logs/ipconfig_all.log");
	printf("[+] Se ha guardado el archivo ip_config_all.log en la carpeta de logs \n");
	pause();
}

void tasks(void){
	cleanc();
	system("tasklist > logs/tasks.log");
	printf("[+] Se ha guardado el archivo tasks.log en la carpeta de logs \n");
	pause();
}

void sysinfo(void){
	cleanc();
	system("systeminfo > logs/sysinfo.log");
	printf("[+] Se ha guardado el archivo sysinfo.log en la carpeta de logs \n");
	pause();
}

void versionWin(void){
	cleanc();
	system("ver > logs/versionWindows.log");
	printf("[+] Se ha guardado el archivo versionWindows.log en la carpeta de logs \n");
	pause();
}

void allConections(void){
	cleanc();
	system("netstat -q > logs/allConections.log");
	printf("[+] Se ha guardado el archivo allConections.log en la carpeta de logs \n");
	pause();
}

void mac(void){
	cleanc();
	system("getmac /v > logs/mac.log");
	printf("[+] Se ha guardado el archivo mac.log en la carpeta de logs \n");
	pause();
}

void ifaceStatistics(void){
	cleanc();
	system("netstat -e > logs/iface-statistics.log");
	printf("[+] Se ha guardado el archivo iface-statistics.log en la carpeta de logs \n");
	pause();
}

void route_tables(void){
	cleanc();
	system("netstat -r > logs/route-tables.log");
	printf("[+] Se ha guardado el archivo route_tables.log en la carpeta de logs \n");
	pause();
}

void drivers(void){
	cleanc();
	system("driverquery > logs/drivers.log");
	printf("[+] Se ha guardado el archivo drivers.log en la carpeta de logs \n");
	pause();
}

void cpu(void){
	cleanc();
	system("wmic cpu list full > logs/cpu.log");
	printf("[+] Se ha guardado el archivo cpu.log en la carpeta de logs \n");
	pause();
}

void bios(void){
	cleanc();
	system("wmic bios list full > logs/bios.log");
	printf("[+] Se ha guardado el archivo bios.log en la carpeta de logs \n");
	pause();
}

void memory(void){
	cleanc();
	system("wmic memorychip list full > logs/memorychip.log");
	printf("[+] Se ha guardado el archivo memorychip.log en la carpeta de logs \n");
	pause();
}

void services(void){
	cleanc();
	system("sc query > logs/services.log");
	printf("[+] Se ha guardado el archivo services.log en la carpeta de logs \n");
	pause();
}

void config_direc(void){
	cleanc();
	system("gpresult /z > logs/gpresult.log");
	printf("[+] Se ha guardado el archivo gpresult.log en la carpeta de logs \n");
	pause();
}

void cache_dns(void){
	cleanc();
	system("ipconfig /displaydns > logs/cache_dns.log");
	printf("[+] Se ha guardado el archivo cache_dns.log en la carpeta de logs \n");
	pause();
}

void arp_table(void){
	cleanc();
	system("arp -a > logs/arp_table.log");
	printf("[+] Se ha guardado el archivo arp_table.log en la carpeta de logs \n");
	pause();
}

void nbt_cache(void){
	cleanc();
	system("nbtstat -c > logs/nbt_cache.log");
	printf("[+] Se ha guardado el archivo nbt_cache.log en la carpeta de logs \n");
	pause();
}

void users(void){
	cleanc();
	system("net user > logs/users.log");
	printf("[+] Se ha guardado el archivo users.log en la carpeta de logs \n");
	pause();
}

void date(void){
	cleanc();
	system("date /t > logs/date.log");
	printf("[+] Se ha guardado el archivo date.log en la carpeta de logs \n");
	pause();
}

void time_zone(void){
	cleanc();
	system("tzutil /g > logs/time_zone.log");
	printf("[+] Se ha guardado el archivo time_zone.log en la carpeta de logs \n");
	pause();
}


void programs(void){
	cleanc();
	system("winget list > logs/programs.log");
	cleanc();
	printf("[+] Se ha guardado el archivo programs.log en la carpeta de logs \n");
	pause();
}

void all(void){
	cleanc();
	system("ipconfig /allcompartments /all > logs/ipconfig_all.log");
    system("whoami > logs/whoami.log");
    system("tasklist > logs/tasks.log");
    system("systeminfo > logs/sysinfo.log");
    system("ver > logs/versionWindows.log");
    system("curl ifconfig.me/all > logs/publicIP.log");
    system("netstat -q > logs/allConections.log");
    system("getmac /v > logs/mac.log");
    system("netstat -e > logs/iface-statistics.log");
    system("netstat -r > logs/route-tables.log");
    system("driverquery > logs/drivers.log");
    system("wmic cpu list full > logs/cpu.log");
    system("wmic bios list full > logs/bios.log");
    system("wmic memorychip list full > logs/memorychip.log");
    system("sc query > logs/services.log");
    system("gpresult /z > logs/gpresult.log");
    system("ipconfig /displaydns > logs/cache_dns.log");
    system("arp -a > logs/arp_table.log");
    system("nbtstat -c > logs/nbt_cache.log");
    system("net user > logs/users.log");
    system("date /t > logs/date.log");
    system("tzutil /g > logs/time_zone.log");
    system("winget list > logs/programs.log");
}

void mostrarMenu(void){
	cleanc();
	system("MODE 108,37");
	printf("\n____________________________________________________________________________________________________________\n\n\n");
    //MENU PROGRAMA
    printf("\t\t\t\t\t1- IP Publica\n");
    printf("\t\t\t\t\t2- WHOAMI\n");
    printf("\t\t\t\t\t3- IPConfig ALL\n");
    printf("\t\t\t\t\t4- Procesos abiertos\n");
    printf("\t\t\t\t\t5- Informacion del sistema\n");
    printf("\t\t\t\t\t6- Version de Windows\n");
    printf("\t\t\t\t\t7- Conexiones establecidas y en escucha\n");
    printf("\t\t\t\t\t8- MAC\n");
    printf("\t\t\t\t\t9- Estadisticas de la interfaz de red\n");
    printf("\t\t\t\t\t10- Tabla de enrutamiento\n");
    printf("\t\t\t\t\t11- Drivers\n");
    printf("\t\t\t\t\t12- CPU\n");
    printf("\t\t\t\t\t13- BIOS\n");
    printf("\t\t\t\t\t14- Memoria\n");
    printf("\t\t\t\t\t15- Servicios\n");
    printf("\t\t\t\t\t16- Configuraciones de directiva\n");
    printf("\t\t\t\t\t17- DNS Cache\n");
    printf("\t\t\t\t\t18- Tabla ARP\n");
    printf("\t\t\t\t\t19- Cache de usuarios NetBIOS\n");
    printf("\t\t\t\t\t20- Usuarios de Windows\n");
    printf("\t\t\t\t\t21- Fecha de Windows\n");
    printf("\t\t\t\t\t22- Zona horaria\n");
    printf("\t\t\t\t\t23- Programas instalados en la maquina\n");
    
    printf("\n\n\t\t\t\t\t98- ALL");
    printf("\n\t\t\t\t\t99- Salir");
    printf("\n____________________________________________________________________________________________________________\n\n\n");
}

void mainProg(void){
	bool i = false;
	while(!i){
		mostrarMenu();
		int opc;
		
		printf("toolZ>> ");
		scanf("%d", &opc);
		fflush(stdin);
		
		switch(opc){
			case 1:
				ip_public();
					break;
			case 2:
				whoami();
					break;
			case 3:
				ip_config_all();
					break;
			case 4:
				tasks();
					break;
			case 5:
				sysinfo();
					break;
			case 6:
				versionWin();
					break;
			case 7:
				allConections();
					break;
			case 8:
				mac();
					break;
			case 9:
				ifaceStatistics();
					break;
			case 10:
				route_tables();
					break;
			case 11:
				drivers();
					break;
			case 12:
				cpu();
					break;
			case 13:
				bios();
					break;
			case 14:
				memory();
					break;
			case 15:
				services();
					break;
			case 16:
				config_direc();
					break;
			case 17:
				cache_dns();
					break;
			case 18:
				arp_table();
					break;
			case 19:
				nbt_cache();
					break;
			case 20:
				users();
					break;
			case 21:
				date();
					break;
			case 22:
				time_zone();
					break;
			case 23:
				programs();
					break;
			case 98:
				all();
					break;
			case 99:
				i = true;
					break;
			default:
				cleanc();
				printf("No se encuentra la opcion que ingresaste...");
				pause();
				
		}
	}
	
}
