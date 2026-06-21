// addr: 0x00f8e660
// name: VideoCapture_BufferPool_acquire
// subsystem: common/media/video
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int VideoCapture_BufferPool_acquire(void * this, void * outBuffer) */

int __thiscall VideoCapture_BufferPool_acquire(void *this,void *outBuffer)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  void *this_00;
  int iVar3;
  void *pvVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Acquires a buffer/resource either by allocating a new record up to the
                       capacity limit or by popping one from a free list, then stores it in the
                       output smart-pointer slot. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_01629b1b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar4 = (void *)0x0;
  if (*(int **)outBuffer != (int *)0x0) {
    (**(code **)(**(int **)outBuffer + 4))(DAT_01b839d8 ^ (uint)&stack0xffffffdc);
    *(undefined4 *)outBuffer = 0;
  }
  FUN_00fc45f0();
  uStack_4 = 0;
  if (*(int *)((int)this + 0x68) == 0) {
    if ((*(int *)((int)this + 8) != 0) && (*(int *)((int)this + 8) <= *(int *)((int)this + 0x58))) {
      uStack_4 = 0xffffffff;
      if (this != (void *)0xfffffff0) {
        FUN_00fc4610();
      }
      ExceptionList = local_c;
      return -1;
    }
    this_00 = Mem_Alloc(0x1c);
    uStack_4._0_1_ = 1;
    if (this_00 != (void *)0x0) {
      pvVar4 = CaptureCommon_Buffer_ctor(this_00,(int)this,*(int *)((int)this + 4));
    }
    uStack_4 = CONCAT31(uStack_4._1_3_,2);
    iVar3 = *(int *)((int)this + 0x58) + 1;
    if (*(int *)((int)this + 0x5c) < iVar3) {
      FUN_00f8e130(iVar3,0);
    }
    puVar1 = (undefined4 *)(*(int *)((int)this + 0x54) + *(int *)((int)this + 0x58) * 4);
    *(int *)((int)this + 0x58) = *(int *)((int)this + 0x58) + 1;
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = pvVar4;
    }
    if (*(int **)outBuffer != (int *)0x0) {
      (**(code **)(**(int **)outBuffer + 4))();
      *(undefined4 *)outBuffer = 0;
    }
    *(void **)outBuffer = pvVar4;
    uStack_4 = 0xffffffff;
    if (this != (void *)0xfffffff0) {
      FUN_00fc4610();
    }
  }
  else {
    uVar2 = *(undefined4 *)(*(int *)((int)this + 100) + -4 + *(int *)((int)this + 0x68) * 4);
    if (*(int **)outBuffer != (int *)0x0) {
      (**(code **)(**(int **)outBuffer + 4))();
      *(undefined4 *)outBuffer = 0;
    }
    *(undefined4 *)outBuffer = uVar2;
    *(int *)((int)this + 0x68) = *(int *)((int)this + 0x68) + -1;
    uStack_4 = 0xffffffff;
    if (this != (void *)0xfffffff0) {
      FUN_00fc4610();
    }
  }
  ExceptionList = local_c;
  return 0;
}

