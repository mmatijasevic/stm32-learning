
int led_state = 0;


void LED_Toggle(void)
{
    led_state = !led_state;
}

int dummy_function(void)
{
    return 42;
}

int can_init(void)
{
    return 1;
}