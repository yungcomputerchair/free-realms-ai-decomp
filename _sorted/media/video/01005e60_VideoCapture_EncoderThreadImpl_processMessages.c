// addr: 0x01005e60
// name: VideoCapture_EncoderThreadImpl_processMessages
// subsystem: common/media/video
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: int VideoCapture_EncoderThreadImpl_processMessages(void) */

int VideoCapture_EncoderThreadImpl_processMessages(void)

{
  undefined4 uVar1;
  uint uVar2;
  void *in_ECX;
  int local_10;
  undefined4 *local_c;
  
                    /* Runs the encoder thread message loop: pops FuncMessage records, dispatches
                       types 1 through 5 to handlers, returns 1 on empty/normal termination and 0 on
                       message type 6. */
  FUN_01004ef0(&local_10);
  do {
    if (local_10 == 0) {
      uVar1 = 0;
      if (local_c != (undefined4 *)0x0) {
        uVar1 = (**(code **)*local_c)(1);
      }
      return CONCAT31((int3)((uint)uVar1 >> 8),1);
    }
    if (local_10 == 1) {
      VideoCapture_handleFuncMessageStart(in_ECX,&local_10);
    }
    else if (local_10 == 2) {
      VideoCapture_handleFuncMessageFrame(in_ECX,&local_10);
    }
    else if (local_10 == 3) {
      VideoCapture_handleFuncMessageEncode(in_ECX,&local_10);
    }
    else if (local_10 == 4) {
      VideoCapture_handleFuncMessageComplete(in_ECX,&local_10);
    }
    else if (local_10 == 5) {
      VideoCapture_handleFuncMessageStop();
    }
    else if (local_10 == 6) {
      uVar2 = 0;
      if (local_c != (undefined4 *)0x0) {
        uVar2 = (**(code **)*local_c)(1);
      }
      return uVar2 & 0xffffff00;
    }
    if (local_c != (undefined4 *)0x0) {
      (**(code **)*local_c)(1);
    }
    local_c = (undefined4 *)0x0;
    FUN_01004ef0(&local_10);
  } while( true );
}

