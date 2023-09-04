#include <stdio.h>
#include <time.h>

int funcaoTime(){
    time_t currentTime;
    time(&currentTime);
    
    printf("Tempo atual: %ld\n", currentTime);
    
    return 0;
}

int funcaoCtime(){
    time_t currentTime;
    time(&currentTime);
    
    char* timeString = ctime(&currentTime);
    printf("Tempo atual: %s", timeString);
    
    return 0;
}

int funcaoLocalTime(){
    time_t currentTime;
    time(&currentTime);
    
    struct tm* timeInfo = localtime(&currentTime);
    
    printf("Ano: %d\n", 1900 + timeInfo->tm_year);
    printf("Mês: %d\n", 1 + timeInfo->tm_mon);
    printf("Dia: %d\n", timeInfo->tm_mday);
    
    return 0;
}

int funcaoStrfTime(){
    time_t currentTime;
    time(&currentTime);
    
    struct tm* timeInfo = localtime(&currentTime);
    
    char buffer[80];
    strftime(buffer, sizeof(buffer), "Data: %d/%m/%Y Hora: %H:%M:%S", timeInfo);
    
    printf("%s\n", buffer);
    
    return 0;
}

int funcaoSleep(){
    printf("Iniciando uma pausa de 5 segundos...\n");
    sleep(5);
    printf("Pausa concluída.\n");
    
    return 0;
}

int funcaoClock(){
    clock_t inicio, fim;
    double tempoDecorrido;

    // Marcar o início da medição de tempo
    inicio = clock();

    // Realizar alguma operação que você deseja medir
    for (int i = 0; i < 1000000; i++) {
        // Alguma operação fictícia
    }

    // Marcar o final da medição de tempo
    fim = clock();

    // Calcular o tempo decorrido em segundos
    tempoDecorrido = (double)(fim - inicio) / CLOCKS_PER_SEC;

    printf("Tempo decorrido: %.6f segundos\n", tempoDecorrido);

    return 0;
}

int funcaoDiffTime(){
    time_t inicio, fim;
    double diferenca;

    // Defina o tempo de início e fim (por exemplo, usando a função time())
    time(&inicio);
    // Faça algumas operações...
    time(&fim);

    // Calcule a diferença de tempo em segundos
    diferenca = difftime(fim, inicio);

    printf("Tempo decorrido: %.2f segundos\n", diferenca);

    return 0;
}

int funcaoMktime(){
    struct tm data_hora;
    time_t tempo;

    // Preencher a estrutura tm com uma data e hora específicas
    data_hora.tm_year = 121;  // Ano (ano atual - 1900)
    data_hora.tm_mon = 0;    // Mês (0 = janeiro, 1 = fevereiro, etc.)
    data_hora.tm_mday = 1;   // Dia do mês
    data_hora.tm_hour = 12;  // Hora
    data_hora.tm_min = 0;    // Minuto
    data_hora.tm_sec = 0;    // Segundo
    data_hora.tm_isdst = -1; // Indicador de horário de verão (-1 para determinar automaticamente)

    // Converter a estrutura tm em um valor de tempo time_t
    tempo = mktime(&data_hora);

    printf("Valor de tempo: %ld\n", (long)tempo);

    return 0;
}

int funcaoAsctime(){
     struct tm data_hora;
    char *data_hora_str;

    // Preencher a estrutura tm com uma data e hora específicas
    data_hora.tm_year = 123;  // Ano (ano atual - 1900)
    data_hora.tm_mon = 0;    // Mês (0 = janeiro, 1 = fevereiro, etc.)
    data_hora.tm_mday = 1;   // Dia do mês
    data_hora.tm_hour = 12;  // Hora
    data_hora.tm_min = 0;    // Minuto
    data_hora.tm_sec = 0;    // Segundo
    data_hora.tm_isdst = -1; // Indicador de horário de verão (-1 para determinar automaticamente)

    // Converter a estrutura tm em uma string legível
    data_hora_str = asctime(&data_hora);

    printf("Data e hora: %s", data_hora_str);

    return 0;
}

int funcaoGmtime(){
    time_t tempo_utc;
    struct tm *data_hora_utc;

    // Defina o valor de tempo para a hora atual em UTC
    time(&tempo_utc);

    // Converter o valor de tempo em uma estrutura tm UTC
    data_hora_utc = gmtime(&tempo_utc);

    printf("Ano: %d\n", 1900 + data_hora_utc->tm_year);
    printf("Mês: %d\n", 1 + data_hora_utc->tm_mon);
    printf("Dia: %d\n", data_hora_utc->tm_mday);

    return 0;
}

int funcaoStrftime(){
    struct tm data_hora;
    char buffer[80];

    // Preencher a estrutura tm com uma data e hora específicas
    data_hora.tm_year = 121;  // Ano (ano atual - 1900)
    data_hora.tm_mon = 0;    // Mês (0 = janeiro, 1 = fevereiro, etc.)
    data_hora.tm_mday = 1;   // Dia do mês
    data_hora.tm_hour = 12;  // Hora
    data_hora.tm_min = 0;    // Minuto
    data_hora.tm_sec = 0;    // Segundo

    // Formatar a estrutura tm em uma string formatada
    strftime(buffer, sizeof(buffer), "Data: %Y-%m-%d Hora: %H:%M:%S", &data_hora);

    printf("String formatada: %s\n", buffer);

    return 0;
}

int main() {
    //funcaoTime();
    //funcaoCtime();
    //funcaoLocalTime();
    //funcaoStrfTime();
    //funcaoSleep();
    //funcaoClock();
    //funcaoDiffTime();
    //funcaoMktime();
    //funcaoAsctime();
    //funcaoGmtime();
    funcaoStrfTime();
    return 0;
}
