// addr: 0x01002e50
// name: VideoCapture_EncoderContext_ctor
// subsystem: common/media/video
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * VideoCapture_EncoderContext_ctor(void * this) */

void * __fastcall VideoCapture_EncoderContext_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Initializes the encoder context/control block by setting synchronization and
                       zeroing active encoder/state fields at offsets 0x88-0x98. Evidence:
                       constructed by a larger encoder setup routine before encoder-thread handlers
                       use those offsets. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01631c66;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00fc4580(4000);
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  ExceptionList = local_c;
  return this;
}

