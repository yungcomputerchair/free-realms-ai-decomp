// addr: 0x01008aa0
// name: VideoCapture_JPG_EncodeJobQueue_ctor
// subsystem: common/media/video
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * VideoCapture_JPG_EncodeJobQueue_ctor(void * this, void * owner) */

void * __thiscall VideoCapture_JPG_EncodeJobQueue_ctor(void *this,void *owner)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Initializes the JPG encode job queue base with an owner pointer,
                       synchronization, and two SoeUtil::Array<SoeUtil::Job*> members. Evidence:
                       only called by VideoCapture_JPG_resetEncodeJobQueue. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01632b17;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(void **)this = owner;
  FUN_00fc4580(4000);
  *(undefined ***)((int)this + 0x90) = SoeUtil::Array<SoeUtil::Job*,0,1>::vftable;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined ***)((int)this + 0xa0) = SoeUtil::Array<SoeUtil::Job*,0,1>::vftable;
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined4 *)((int)this + 0xa8) = 0;
  *(undefined4 *)((int)this + 0xac) = 0;
  ExceptionList = local_c;
  return this;
}

