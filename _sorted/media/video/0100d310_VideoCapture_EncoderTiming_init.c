// addr: 0x0100d310
// name: VideoCapture_EncoderTiming_init
// subsystem: common/media/video
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void VideoCapture_EncoderTiming_init(void * timing) */

void __fastcall VideoCapture_EncoderTiming_init(void *timing)

{
                    /* Zeroes a 10-dword timing/counter structure during EncoderThreadImpl
                       construction. Evidence: VideoCapture_EncoderThreadImpl_ctor calls it after
                       queue construction and before storing timing/rate fields. */
  *(undefined4 *)timing = 0;
  *(undefined4 *)((int)timing + 4) = 0;
  *(undefined4 *)((int)timing + 8) = 0;
  *(undefined4 *)((int)timing + 0xc) = 0;
  *(undefined4 *)((int)timing + 0x10) = 0;
  *(undefined4 *)((int)timing + 0x14) = 0;
  *(undefined4 *)((int)timing + 0x18) = 0;
  *(undefined4 *)((int)timing + 0x1c) = 0;
  *(undefined4 *)((int)timing + 0x20) = 0;
  *(undefined4 *)((int)timing + 0x24) = 0;
  return;
}

