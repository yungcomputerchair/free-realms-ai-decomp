// addr: 0x00d0bae0
// name: ImageCapture_JobQueue_ctor
// subsystem: common/media/video
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * ImageCapture_JobQueue_ctor(void * this, void * owner) */

void * __thiscall ImageCapture_JobQueue_ctor(void *this,void *owner)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Initializes an image-capture job queue object with an owner pointer, a
                       4000-count synchronization object, and two SoeUtil::Array<SoeUtil::Job*>
                       members. Evidence: VideoCapture_JPG_resetEncodeQueue allocates 0xb0 bytes and
                       passes this to a JobQueueCallbackHandlerT<ImageCapture::JobRec>. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016122a7;
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

