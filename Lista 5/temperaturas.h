/*Questão 27. Conversor de Temperaturas Modular — Crie as funções celsiusParaFahrenheit,
celsiusParaKelvin, fahrenheitParaCelsius e kelvinParaCelsius, todas com parâmetro e retorno
float. Na main(), apresente um menu, leia a escolha e a temperatura e exiba o valor convertido
com duas casas decimais usando a função correspondente.*/

float celsiusParaFahrenheit(float temperatura) {
    return (temperatura * 9/5) + 32;
}

float celsiusParaKelvin(float temperatura) {
    return temperatura + 273.15;
}

float fahrenheitParaCelsius(float temperatura) {
    return (temperatura - 32) * 5/9;
}

float kelvinParaCelsius(float temperatura) {
    return temperatura - 273.15;
}