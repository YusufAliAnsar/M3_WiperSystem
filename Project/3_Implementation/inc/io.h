#define START_ADC  ADCSRA |= (1<<ADSC)
#define ENABLE_ADC ADCSRA |= (1<<ADEN)

#define SET_BIT(PORT,PIN)  PORT |= (1<<PIN)
#define CLR_BIT(PORT,PIN)  PORT &= ~(1<<PIN)

void ADC_init();
uint16_t READ_ADC(uint8_t adcx);
#define SET_PWM_VALUE(value)  OCR0A = value

#define SET_BIT(PORT,PIN)  PORT |= (1<<PIN)
#define CLR_BIT(PORT,PIN)  PORT &= ~(1<<PIN)

void PWM_init();
#define START_TIMER TIMSK0|=(1<<TOIE0)
#define STOP_TIMER  TIMSK0 &= ~(1<<TOIE0)

#define SET_BIT(PORT,PIN)  PORT |= (1<<PIN)
#define CLR_BIT(PORT,PIN)  PORT &= ~(1<<PIN)

void TIMER_init();
