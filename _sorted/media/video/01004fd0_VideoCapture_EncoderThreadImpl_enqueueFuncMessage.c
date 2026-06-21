// addr: 0x01004fd0
// name: VideoCapture_EncoderThreadImpl_enqueueFuncMessage
// subsystem: common/media/video
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void VideoCapture_EncoderThreadImpl_enqueueFuncMessage(void * this, void *
   message) */

void __thiscall VideoCapture_EncoderThreadImpl_enqueueFuncMessage(void *this,void *message)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Locks the encoder thread message queue, pushes a FuncMessage through the
                       deque helper, then unlocks. Evidence is its repeated use by encoder-thread
                       message producers and the deque element type from the constructor. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01632218;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00fc45f0(DAT_01b839d8 ^ (uint)&stack0xffffffe8);
  local_4 = 0;
  FUN_01004bf0(message);
  local_4 = 0xffffffff;
  if (this != (void *)0xfffffda0) {
    FUN_00fc4610();
  }
  ExceptionList = local_c;
  return;
}

