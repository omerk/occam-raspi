VAL []BYTE PIN.OUTPUT IS "out":
VAL []BYTE PIN.INPUT IS "in":

VAL BYTE PIN.LOW IS '0':
VAL BYTE PIN.HIGH IS '1':

VAL [][]BYTE pins.direction IS
  ["/sys/class/gpio/gpio0/direction*#00",
  "/sys/class/gpio/gpio1/direction*#00",
  "/sys/class/gpio/gpio4/direction*#00",
  "/sys/class/gpio/gpio7/direction*#00",
  "/sys/class/gpio/gpio8/direction*#00",
  "/sys/class/gpio/gpio9/direction*#00",
  "/sys/class/gpio/gpio10/direction",
  "/sys/class/gpio/gpio11/direction",
  "/sys/class/gpio/gpio14/direction",
  "/sys/class/gpio/gpio15/direction",
  "/sys/class/gpio/gpio17/direction",
  "/sys/class/gpio/gpio18/direction",
  "/sys/class/gpio/gpio21/direction",
  "/sys/class/gpio/gpio22/direction",
  "/sys/class/gpio/gpio23/direction",
  "/sys/class/gpio/gpio24/direction",
  "/sys/class/gpio/gpio25/direction"]:

VAL [][]BYTE pins.value IS
  ["/sys/class/gpio/gpio0/value*#00",
  "/sys/class/gpio/gpio1/value*#00",
  "/sys/class/gpio/gpio4/value*#00",
  "/sys/class/gpio/gpio7/value*#00",
  "/sys/class/gpio/gpio8/value*#00",
  "/sys/class/gpio/gpio9/value*#00",
  "/sys/class/gpio/gpio10/value",
  "/sys/class/gpio/gpio11/value",
  "/sys/class/gpio/gpio14/value",
  "/sys/class/gpio/gpio15/value",
  "/sys/class/gpio/gpio17/value",
  "/sys/class/gpio/gpio18/value",
  "/sys/class/gpio/gpio21/value",
  "/sys/class/gpio/gpio22/value",
  "/sys/class/gpio/gpio23/value",
  "/sys/class/gpio/gpio24/value",
  "/sys/class/gpio/gpio25/value"]:


