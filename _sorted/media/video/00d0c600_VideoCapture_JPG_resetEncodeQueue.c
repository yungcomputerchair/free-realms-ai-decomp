// addr: 0x00d0c600
// name: VideoCapture_JPG_resetEncodeQueue
// subsystem: common/media/video
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void VideoCapture_JPG_resetEncodeQueue(void * this, void * jobConfig) */

void __thiscall VideoCapture_JPG_resetEncodeQueue(void *this,void *jobConfig)

{
  void *pvVar1;
  void *pvVar2;
  undefined4 uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Rebuilds a JPG job queue: allocates a job record, callback handler, and queue
                       object, frees prior queue members, then stores the new queue components. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01612559;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(0xb0);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    jobConfig = (void *)0x0;
  }
  else {
    jobConfig = ImageCapture_JobQueue_ctor(pvVar1,jobConfig);
  }
  local_4 = 1;
  pvVar1 = Mem_Alloc(0x28);
  local_4._0_1_ = 2;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = CaptureCommon_JobQueueCallbackHandler_ImageCaptureJobRec_ctor(pvVar1,jobConfig);
  }
  local_4._0_1_ = 3;
  pvVar2 = Mem_Alloc(0x328);
  local_4._0_1_ = 4;
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00fc6db0();
  }
  local_4 = CONCAT31(local_4._1_3_,5);
  FUN_00fc5a60(pvVar1);
  FUN_00fc70e0(1,0x4000,2,0);
  pvVar2 = *(void **)((int)this + 8);
  if (pvVar2 != (void *)0x0) {
    FUN_00d0bf70();
                    /* WARNING: Subroutine does not return */
    _free(pvVar2);
  }
  *(void **)((int)this + 8) = jobConfig;
  if (*(undefined4 **)((int)this + 0x10) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)this + 0x10))(1);
    *(undefined4 *)((int)this + 0x10) = 0;
  }
  *(void **)((int)this + 0x10) = pvVar1;
  pvVar1 = *(void **)this;
  if (pvVar1 != (void *)0x0) {
    FUN_00fc6e40();
                    /* WARNING: Subroutine does not return */
    _free(pvVar1);
  }
  *(undefined4 *)this = uVar3;
  *(undefined1 *)((int)this + 0x18) = 0;
  ExceptionList = local_c;
  return;
}

