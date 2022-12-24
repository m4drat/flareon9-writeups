using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using static Deobfuscator.Dumped;

namespace Deobfuscator
{
    internal class KeyExtractor
    {
        public static void Dispatcher(string text2)
        {
            uint num2 = FLARE14.flared_51(text2);
            bool flag10 = num2 <= 518729469U;
            if (flag10)
            {
                bool flag11 = num2 <= 434841374U;
                if (flag11)
                {
                    bool flag12 = num2 <= 350953279U;
                    if (flag12)
                    {
                        bool flag13 = num2 != 334175660U;
                        if (flag13)
                        {
                            bool flag14 = num2 == 350953279U;
                            if (flag14)
                            {
                                bool flag15 = text2 == "19";
                                if (flag15)
                                {
                                    FLARE14.flare_56(int.Parse(text2), "146");
                                    text2 = FLARE02.flare_04("JChwaW5nIC1uIDEgMTAuNjUuNDUuMyB8IGZpbmRzdHIgL2kgdHRsKSAtZXEgJG51bGw7JChwaW5nIC1uIDEgMTAuNjUuNC41MiB8IGZpbmRzdHIgL2kgdHRsKSAtZXEgJG51bGw7JChwaW5nIC1uIDEgMTAuNjUuMzEuMTU1IHwgZmluZHN0ciAvaSB0dGwpIC1lcSAkbnVsbDskKHBpbmcgLW4gMSBmbGFyZS1vbi5jb20gfCBmaW5kc3RyIC9pIHR0bCkgLWVxICRudWxs");
                                    FLARE14.h.AppendData(Encoding.ASCII.GetBytes(FLARE14.flare_57() + text2));
                                }
                            }
                        }
                        else
                        {
                            bool flag16 = text2 == "18";
                            if (flag16)
                            {
                                FLARE14.flare_56(int.Parse(text2), "939");
                                text2 = FLARE02.flare_04("JAAoAHAAaQBuAGcAIAAtAG4AIAAxACAAMQAwAC4AMQAwAC4AMgAyAC4ANAAyACAAfAAgAGYAaQBuAGQAcwB0AHIAIAAvAGkAIAB0AHQAbAApACAALQBlAHEAIAAkAG4AdQBsAGwAOwAkACgAcABpAG4AZwAgAC0AbgAgADEAIAAxADAALgAxADAALgAyADMALgAyADAAMAAgAHwAIABmAGkAbgBkAHMAdAByACAALwBpACAAdAB0AGwAKQAgAC0AZQBxACAAJABuAHUAbABsADsAJAAoAHAAaQBuAGcAIAAtAG4AIAAxACAAMQAwAC4AMQAwAC4ANAA1AC4AMQA5ACAAfAAgAGYAaQBuAGQAcwB0AHIAIAAvAGkAIAB0AHQAbAApACAALQBlAHEAIAAkAG4AdQBsAGwAOwAkACgAcABpAG4AZwAgAC0AbgAgADEAIAAxADAALgAxADAALgAxADkALgA1ADAAIAB8ACAAZgBpAG4AZABzAHQAcgAgAC8AaQAgAHQAdABsACkAIAAtAGUAcQAgACQAbgB1AGwAbAA=");
                                FLARE14.h.AppendData(Encoding.ASCII.GetBytes(FLARE14.flare_57() + text2));
                            }
                        }
                    }
                    else
                    {
                        bool flag17 = num2 != 401286136U;
                        if (flag17)
                        {
                            bool flag18 = num2 != 418063755U;
                            if (flag18)
                            {
                                bool flag19 = num2 == 434841374U;
                                if (flag19)
                                {
                                    bool flag20 = text2 == "16";
                                    if (flag20)
                                    {
                                        FLARE14.flare_56(int.Parse(text2), "e87");
                                        text2 = FLARE02.flare_04("JAAoAHAAaQBuAGcAIAAtAG4AIAAxACAAMQAwAC4ANgA1AC4ANQAxAC4AMQAxACAAfAAgAGYAaQBuAGQAcwB0AHIAIAAvAGkAIAB0AHQAbAApACAALQBlAHEAIAAkAG4AdQBsAGwAOwAkACgAcABpAG4AZwAgAC0AbgAgADEAIAAxADAALgA2ADUALgA2AC4AMQAgAHwAIABmAGkAbgBkAHMAdAByACAALwBpACAAdAB0AGwAKQAgAC0AZQBxACAAJABuAHUAbABsADsAJAAoAHAAaQBuAGcAIAAtAG4AIAAxACAAMQAwAC4ANgA1AC4ANQAyAC4AMgAwADAAIAB8ACAAZgBpAG4AZABzAHQAcgAgAC8AaQAgAHQAdABsACkAIAAtAGUAcQAgACQAbgB1AGwAbAA7ACQAKABwAGkAbgBnACAALQBuACAAMQAgADEAMAAuADYANQAuADYALgAzACAAfAAgAGYAaQBuAGQAcwB0AHIAIAAvAGkAIAB0AHQAbAApACAALQBlAHEAIAAkAG4AdQBsAGwA");
                                        FLARE14.h.AppendData(Encoding.ASCII.GetBytes(FLARE14.flare_57() + text2));
                                    }
                                }
                            }
                            else
                            {
                                bool flag21 = text2 == "15";
                                if (flag21)
                                {
                                    FLARE14.flare_56(int.Parse(text2), "197");
                                    text2 = FLARE02.flare_04("JAAoAHAAaQBuAGcAIAAtAG4AIAAxACAAMQAwAC4AMQAwAC4AMQAwAC4ANAAgAHwAIABmAGkAbgBkAHMAdAByACAALwBpACAAdAB0AGwAKQAgAC0AZQBxACAAJABuAHUAbABsADsAJAAoAHAAaQBuAGcAIAAtAG4AIAAxACAAMQAwAC4AMQAwAC4ANQAwAC4AMQAwACAAfAAgAGYAaQBuAGQAcwB0AHIAIAAvAGkAIAB0AHQAbAApACAALQBlAHEAIAAkAG4AdQBsAGwAOwAkACgAcABpAG4AZwAgAC0AbgAgADEAIAAxADAALgAxADAALgAyADIALgA1ADAAIAB8ACAAZgBpAG4AZABzAHQAcgAgAC8AaQAgAHQAdABsACkAIAAtAGUAcQAgACQAbgB1AGwAbAA7ACQAKABwAGkAbgBnACAALQBuACAAMQAgADEAMAAuADEAMAAuADQANQAuADEAOQAgAHwAIABmAGkAbgBkAHMAdAByACAALwBpACAAdAB0AGwAKQAgAC0AZQBxACAAJABuAHUAbABsAA==");
                                    FLARE14.h.AppendData(Encoding.ASCII.GetBytes(FLARE14.flare_57() + text2));
                                }
                            }
                        }
                        else
                        {
                            bool flag22 = text2 == "14";
                            if (flag22)
                            {
                                FLARE14.flare_56(int.Parse(text2), "3a7");
                                text2 = FLARE02.flare_04("JAAoAHAAaQBuAGcAIAAtAG4AIAAxACAAMQAwAC4AMQAwAC4AMgAxAC4AMgAwADEAIAB8ACAAZgBpAG4AZABzAHQAcgAgAC8AaQAgAHQAdABsACkAIAAtAGUAcQAgACQAbgB1AGwAbAA7ACQAKABwAGkAbgBnACAALQBuACAAMQAgADEAMAAuADEAMAAuADEAOQAuADIAMAAxACAAfAAgAGYAaQBuAGQAcwB0AHIAIAAvAGkAIAB0AHQAbAApACAALQBlAHEAIAAkAG4AdQBsAGwAOwAkACgAcABpAG4AZwAgAC0AbgAgADEAIAAxADAALgAxADAALgAxADkALgAyADAAMgAgAHwAIABmAGkAbgBkAHMAdAByACAALwBpACAAdAB0AGwAKQAgAC0AZQBxACAAJABuAHUAbABsADsAJAAoAHAAaQBuAGcAIAAtAG4AIAAxACAAMQAwAC4AMQAwAC4AMgA0AC4AMgAwADAAIAB8ACAAZgBpAG4AZABzAHQAcgAgAC8AaQAgAHQAdABsACkAIAAtAGUAcQAgACQAbgB1AGwAbAA=");
                                FLARE14.h.AppendData(Encoding.ASCII.GetBytes(FLARE14.flare_57() + text2));
                            }
                        }
                    }
                }
                else
                {
                    bool flag23 = num2 <= 468396612U;
                    if (flag23)
                    {
                        bool flag24 = num2 != 451618993U;
                        if (flag24)
                        {
                            bool flag25 = num2 == 468396612U;
                            if (flag25)
                            {
                                bool flag26 = text2 == "10";
                                if (flag26)
                                {
                                    FLARE14.flare_56(int.Parse(text2), "f38");
                                    text2 = "hostname";
                                    FLARE14.h.AppendData(Encoding.ASCII.GetBytes(FLARE14.flare_57() + text2));
                                }
                            }
                        }
                        else
                        {
                            bool flag27 = text2 == "17";
                            if (flag27)
                            {
                                FLARE14.flare_56(int.Parse(text2), "2e4");
                                text2 = FLARE02.flare_04("JAAoAHAAaQBuAGcAIAAtAG4AIAAxACAAMQAwAC4ANgA1AC4ANAA1AC4AMQA4ACAAfAAgAGYAaQBuAGQAcwB0AHIAIAAvAGkAIAB0AHQAbAApACAALQBlAHEAIAAkAG4AdQBsAGwAOwAkACgAcABpAG4AZwAgAC0AbgAgADEAIAAxADAALgA2ADUALgAyADgALgA0ADEAIAB8ACAAZgBpAG4AZABzAHQAcgAgAC8AaQAgAHQAdABsACkAIAAtAGUAcQAgACQAbgB1AGwAbAA7ACQAKABwAGkAbgBnACAALQBuACAAMQAgADEAMAAuADYANQAuADMANgAuADEAMwAgAHwAIABmAGkAbgBkAHMAdAByACAALwBpACAAdAB0AGwAKQAgAC0AZQBxACAAJABuAHUAbABsADsAJAAoAHAAaQBuAGcAIAAtAG4AIAAxACAAMQAwAC4ANgA1AC4ANQAxAC4AMQAwACAAfAAgAGYAaQBuAGQAcwB0AHIAIAAvAGkAIAB0AHQAbAApACAALQBlAHEAIAAkAG4AdQBsAGwA");
                                FLARE14.h.AppendData(Encoding.ASCII.GetBytes(FLARE14.flare_57() + text2));
                            }
                        }
                    }
                    else
                    {
                        bool flag28 = num2 != 485174231U;
                        if (flag28)
                        {
                            bool flag29 = num2 != 501951850U;
                            if (flag29)
                            {
                                bool flag30 = num2 == 518729469U;
                                if (flag30)
                                {
                                    bool flag31 = text2 == "13";
                                    if (flag31)
                                    {
                                        FLARE14.flare_56(int.Parse(text2), "e38");
                                        text2 = FLARE02.flare_04("bnNsb29rdXAgZmxhcmUtb24uY29tIHwgZmluZHN0ciAvaSBBZGRyZXNzO25zbG9va3VwIHdlYm1haWwuZmxhcmUtb24uY29tIHwgZmluZHN0ciAvaSBBZGRyZXNz");
                                        FLARE14.h.AppendData(Encoding.ASCII.GetBytes(FLARE14.flare_57() + text2));
                                    }
                                }
                            }
                            else
                            {
                                bool flag32 = text2 == "12";
                                if (flag32)
                                {
                                    FLARE14.flare_56(int.Parse(text2), "570");
                                    text2 = FLARE02.flare_04("JAAoAHAAaQBuAGcAIAAtAG4AIAAxACAAMQAwAC4ANgA1AC4ANAAuADUAMAAgAHwAIABmAGkAbgBkAHMAdAByACAALwBpACAAdAB0AGwAKQAgAC0AZQBxACAAJABuAHUAbABsADsAJAAoAHAAaQBuAGcAIAAtAG4AIAAxACAAMQAwAC4ANgA1AC4ANAAuADUAMQAgAHwAIABmAGkAbgBkAHMAdAByACAALwBpACAAdAB0AGwAKQAgAC0AZQBxACAAJABuAHUAbABsADsAJAAoAHAAaQBuAGcAIAAtAG4AIAAxACAAMQAwAC4ANgA1AC4ANgA1AC4ANgA1ACAAfAAgAGYAaQBuAGQAcwB0AHIAIAAvAGkAIAB0AHQAbAApACAALQBlAHEAIAAkAG4AdQBsAGwAOwAkACgAcABpAG4AZwAgAC0AbgAgADEAIAAxADAALgA2ADUALgA1ADMALgA1ADMAIAB8ACAAZgBpAG4AZABzAHQAcgAgAC8AaQAgAHQAdABsACkAIAAtAGUAcQAgACQAbgB1AGwAbAA7ACQAKABwAGkAbgBnACAALQBuACAAMQAgADEAMAAuADYANQAuADIAMQAuADIAMAAwACAAfAAgAGYAaQBuAGQAcwB0AHIAIAAvAGkAIAB0AHQAbAApACAALQBlAHEAIAAkAG4AdQBsAGwA");
                                    FLARE14.h.AppendData(Encoding.ASCII.GetBytes(FLARE14.flare_57() + text2));
                                }
                            }
                        }
                        else
                        {
                            bool flag33 = text2 == "11";
                            if (flag33)
                            {
                                FLARE14.flare_56(int.Parse(text2), "818");
                                text2 = FLARE02.flare_04("RwBlAHQALQBOAGUAdABUAEMAUABDAG8AbgBuAGUAYwB0AGkAbwBuACAAfAAgAFcAaABlAHIAZQAtAE8AYgBqAGUAYwB0ACAAewAkAF8ALgBTAHQAYQB0AGUAIAAtAGUAcQAgACIARQBzAHQAYQBiAGwAaQBzAGgAZQBkACIAfQAgAHwAIABTAGUAbABlAGMAdAAtAE8AYgBqAGUAYwB0ACAAIgBMAG8AYwBhAGwAQQBkAGQAcgBlAHMAcwAiACwAIAAiAEwAbwBjAGEAbABQAG8AcgB0ACIALAAgACIAUgBlAG0AbwB0AGUAQQBkAGQAcgBlAHMAcwAiACwAIAAiAFIAZQBtAG8AdABlAFAAbwByAHQAIgA=");
                                FLARE14.h.AppendData(Encoding.ASCII.GetBytes(FLARE14.flare_57() + text2));
                            }
                        }
                    }
                }
            }
            else
            {
                bool flag34 = num2 <= 906799682U;
                if (flag34)
                {
                    bool flag35 = num2 <= 822911587U;
                    if (flag35)
                    {
                        bool flag36 = num2 != 806133968U;
                        if (flag36)
                        {
                            bool flag37 = num2 == 822911587U;
                            if (flag37)
                            {
                                bool flag38 = text2 == "4";
                                if (flag38)
                                {
                                    FLARE14.flare_56(int.Parse(text2), "ea5");
                                    text2 = FLARE02.flare_04("WwBTAHkAcwB0AGUAbQAuAEUAbgB2AGkAcgBvAG4AbQBlAG4AdABdADoAOgBPAFMAVgBlAHIAcwBpAG8AbgAuAFYAZQByAHMAaQBvAG4AUwB0AHIAaQBuAGcA");
                                }
                            }
                        }
                        else
                        {
                            bool flag39 = text2 == "5";
                            if (flag39)
                            {
                                FLARE14.flare_56(int.Parse(text2), "bfb");
                                text2 = "net user";
                                FLARE14.h.AppendData(Encoding.ASCII.GetBytes(FLARE14.flare_57() + text2));
                            }
                        }
                    }
                    else
                    {
                        bool flag40 = num2 != 839689206U;
                        if (flag40)
                        {
                            bool flag41 = num2 != 873244444U;
                            if (flag41)
                            {
                                bool flag42 = num2 == 906799682U;
                                if (flag42)
                                {
                                    bool flag43 = text2 == "3";
                                    if (flag43)
                                    {
                                        FLARE14.flare_56(int.Parse(text2), "113");
                                        text2 = "whoami";
                                        FLARE14.h.AppendData(Encoding.ASCII.GetBytes(FLARE14.flare_57() + text2));
                                    }
                                }
                            }
                            else
                            {
                                bool flag44 = text2 == "1";
                                if (flag44)
                                {
                                    FLARE14.flare_56(int.Parse(text2), "c2e");
                                    text2 = FLARE02.flare_04("RwBlAHQALQBOAGUAdABJAFAAQQBkAGQAcgBlAHMAcwAgAC0AQQBkAGQAcgBlAHMAcwBGAGEAbQBpAGwAeQAgAEkAUAB2ADQAIAB8ACAAUwBlAGwAZQBjAHQALQBPAGIAagBlAGMAdAAgAEkAUABBAGQAZAByAGUAcwBzAA==");
                                    FLARE14.h.AppendData(Encoding.ASCII.GetBytes(FLARE14.flare_57() + text2));
                                }
                            }
                        }
                        else
                        {
                            bool flag45 = text2 == "7";
                            if (flag45)
                            {
                                FLARE14.flare_56(int.Parse(text2), "b");
                                text2 = FLARE02.flare_04("RwBlAHQALQBDAGgAaQBsAGQASQB0AGUAbQAgAC0AUABhAHQAaAAgACIAQwA6AFwAUAByAG8AZwByAGEAbQAgAEYAaQBsAGUAcwAiACAAfAAgAFMAZQBsAGUAYwB0AC0ATwBiAGoAZQBjAHQAIABOAGEAbQBlAA==");
                                FLARE14.h.AppendData(Encoding.ASCII.GetBytes(FLARE14.flare_57() + text2));
                            }
                        }
                    }
                }
                else
                {
                    bool flag46 = num2 <= 1024243015U;
                    if (flag46)
                    {
                        bool flag47 = num2 != 923577301U;
                        if (flag47)
                        {
                            bool flag48 = num2 != 1007465396U;
                            if (flag48)
                            {
                                bool flag49 = num2 == 1024243015U;
                                if (flag49)
                                {
                                    bool flag50 = text2 == "8";
                                    if (flag50)
                                    {
                                        FLARE14.flare_56(int.Parse(text2), "2b7");
                                        text2 = FLARE02.flare_04("RwBlAHQALQBDAGgAaQBsAGQASQB0AGUAbQAgAC0AUABhAHQAaAAgACcAQwA6AFwAUAByAG8AZwByAGEAbQAgAEYAaQBsAGUAcwAgACgAeAA4ADYAKQAnACAAfAAgAFMAZQBsAGUAYwB0AC0ATwBiAGoAZQBjAHQAIABOAGEAbQBlAA==");
                                        FLARE14.h.AppendData(Encoding.ASCII.GetBytes(FLARE14.flare_57() + text2));
                                    }
                                }
                            }
                            else
                            {
                                bool flag51 = text2 == "9";
                                if (flag51)
                                {
                                    FLARE14.flare_56(int.Parse(text2), "9b2");
                                    text2 = FLARE02.flare_04("RwBlAHQALQBDAGgAaQBsAGQASQB0AGUAbQAgAC0AUABhAHQAaAAgACcAQwA6ACcAIAB8ACAAUwBlAGwAZQBjAHQALQBPAGIAagBlAGMAdAAgAE4AYQBtAGUA");
                                    FLARE14.h.AppendData(Encoding.ASCII.GetBytes(FLARE14.flare_57() + text2));
                                }
                            }
                        }
                        else
                        {
                            bool flag52 = text2 == "2";
                            if (flag52)
                            {
                                FLARE14.flare_56(int.Parse(text2), "d7d");
                                text2 = FLARE02.flare_04("RwBlAHQALQBOAGUAdABOAGUAaQBnAGgAYgBvAHIAIAAtAEEAZABkAHIAZQBzAHMARgBhAG0AaQBsAHkAIABJAFAAdgA0ACAAfAAgAFMAZQBsAGUAYwB0AC0ATwBiAGoAZQBjAHQAIAAiAEkAUABBAEQARAByAGUAcwBzACIA");
                                FLARE14.h.AppendData(Encoding.ASCII.GetBytes(FLARE14.flare_57() + text2));
                            }
                        }
                    }
                    else
                    {
                        bool flag53 = num2 != 2364708844U;
                        if (flag53)
                        {
                            bool flag54 = num2 != 2381486463U;
                            if (flag54)
                            {
                                bool flag55 = num2 == 2415041701U;
                                if (flag55)
                                {
                                    bool flag56 = text2 == "22";
                                    if (flag56)
                                    {
                                        FLARE14.flare_56(int.Parse(text2), "709");
                                        text2 = "systeminfo | findstr /i \"Domain\"";
                                        FLARE14.h.AppendData(Encoding.ASCII.GetBytes(FLARE14.flare_57() + text2));
                                    }
                                }
                            }
                            else
                            {
                                bool flag57 = text2 == "20";
                                if (flag57)
                                {
                                    FLARE14.flare_56(int.Parse(text2), "3c9974");
                                    text2 = FLARE02.flare_04("RwBlAHQALQBOAGUAdABJAFAAQwBvAG4AZgBpAGcAdQByAGEAdABpAG8AbgAgAHwAIABGAG8AcgBlAGEAYwBoACAASQBQAHYANABEAGUAZgBhAHUAbAB0AEcAYQB0AGUAdwBhAHkAIAB8ACAAUwBlAGwAZQBjAHQALQBPAGIAagBlAGMAdAAgAE4AZQB4AHQASABvAHAA");
                                    FLARE14.h.AppendData(Encoding.ASCII.GetBytes(FLARE14.flare_57() + text2));
                                }
                            }
                        }
                        else
                        {
                            bool flag58 = text2 == "21";
                            if (flag58)
                            {
                                FLARE14.flare_56(int.Parse(text2), "8e6");
                                text2 = FLARE02.flare_04("RwBlAHQALQBEAG4AcwBDAGwAaQBlAG4AdABTAGUAcgB2AGUAcgBBAGQAZAByAGUAcwBzACAALQBBAGQAZAByAGUAcwBzAEYAYQBtAGkAbAB5ACAASQBQAHYANAAgAHwAIABTAGUAbABlAGMAdAAtAE8AYgBqAGUAYwB0ACAAUwBFAFIAVgBFAFIAQQBkAGQAcgBlAHMAcwBlAHMA");
                                FLARE14.h.AppendData(Encoding.ASCII.GetBytes(FLARE14.flare_57() + text2));
                            }
                        }
                    }
                }
            }
        }

        /// <summary>
        /// Generates the RC4 key by executing the commands in the correct order.
        /// </summary>
        public static byte[] GenerateRC4Key()
        {
            List<string> sequence = new List<string> { "2", "10", "8", "19", "11", "1", "15", "13", "22", "16", "5", "12", "21", "3", "18", "17", "20", "14", "9", "7", "4" };
            foreach (var item in sequence)
            {
                Dispatcher(item);
            }

            return FLARE14.h.GetHashAndReset();
        }

        /// <summary>
        /// Extracts the encrypted data from the executable and decrypts it.
        /// </summary>
        /// <param name="executablePath"> path to the executable </param>
        /// <param name="outputPath"> path to the output file </param>
        /// <param name="key"> the RC4 key </param>
        public static void ExtractDataAndDecrypt(string executablePath, string outputPath, byte[] key)
        {
            byte[] encryptedData = FLARE15.flare_69(FLARE14.flare_54(FLARE14.sh), executablePath);
            byte[] decryptedData = FLARE12.flared_47(key, encryptedData);
            string filePath = outputPath + Encoding.UTF8.GetString(FLARE12.flared_47(key, new byte[] { 31, 29, 40, 72 }));
            FileStream fileStream = new FileStream(filePath, FileMode.Create, FileAccess.Write, FileShare.Read);
            fileStream.Write(decryptedData, 0, decryptedData.Length);
            Console.WriteLine("Saved to: {0}", filePath);
        }
    }
}
