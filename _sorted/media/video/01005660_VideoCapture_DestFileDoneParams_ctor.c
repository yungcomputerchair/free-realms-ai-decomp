// addr: 0x01005660
// name: VideoCapture_DestFileDoneParams_ctor
// subsystem: common/media/video
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * VideoCapture_DestFileDoneParams_ctor(void * this, void * destFileName)
    */

void * __thiscall VideoCapture_DestFileDoneParams_ctor(void *this,void *destFileName)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs DestFileDoneParams by installing FuncParams then
                       DestFileDoneParams vtables and copying/initializing the destination filename
                       string. Evidence: explicit VideoCapture::DestFileDoneParams vtable and caller
                       VideoCapture_handleFuncMessageComplete. */
  puStack_8 = &LAB_01632373;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = VideoCapture::FuncParams::vftable;
  local_4 = 0;
  *(undefined ***)this = VideoCapture::DestFileDoneParams::vftable;
  FUN_01004d90(destFileName);
  ExceptionList = local_c;
  return this;
}

