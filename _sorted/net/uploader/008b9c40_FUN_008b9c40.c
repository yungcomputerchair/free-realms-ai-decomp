// addr: 0x008b9c40
// name: FUN_008b9c40
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void actor_controller_target_dispatch(void * actor, void * arg, void * target,
   int flags_) */

void __thiscall
actor_controller_target_dispatch(void *this,void *actor,void *arg,void *target,int flags_)

{
  int iVar1;
  void *pvVar2;
  uint value_;
  undefined *puStack_2c;
  undefined **ppuStack_14;
  void *pvStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Ensures actor controller type12 is active, then forwards a Target object to
                       the controller virtual handler at offset 0xd4. Exact controller class is not
                       named. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_01581893;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(undefined4 **)((int)this + 0xec) != (undefined4 *)0x0) {
    iVar1 = (**(code **)**(undefined4 **)((int)this + 0xec))();
    if (iVar1 == 0xc) goto LAB_008b9d01;
  }
  value_ = 0;
  if (*(uint *)((int)this + 0xec) != 0) {
    value_ = *(uint *)((int)this + 0xec);
  }
  puStack_2c = (undefined *)0x8b9c97;
  pvVar2 = Mem_Alloc(0x3c0);
  uStack_4 = 0;
  if (pvVar2 == (void *)0x0) {
    pvVar2 = (void *)0x0;
  }
  else {
    ppuStack_14 = &puStack_2c;
    puStack_2c = DAT_01be4850;
    pvVar2 = (void *)FUN_00afd6f0(*(undefined4 *)((int)this + 200),*(undefined4 *)((int)this + 0xe8)
                                  ,this);
  }
  uStack_4 = 0xffffffff;
  *(void **)((int)this + 0xec) = pvVar2;
  puStack_2c = (undefined *)0x8b9cf4;
  setField_78(pvVar2,value_);
  *(undefined1 *)(*(int *)((int)this + 0x1a8) + 0x88) = 0;
LAB_008b9d01:
  ppuStack_14 = Target::vftable;
  pvStack_10 = (void *)0x0;
  puStack_2c = arg;
  FUN_0101c060(&ppuStack_14);
  uStack_4 = 1;
  puStack_2c = (undefined *)0x8b9d4e;
  (**(code **)(**(int **)((int)this + 0xec) + 0xd4))();
  puStack_8 = (undefined1 *)0xffffffff;
  puStack_2c = (undefined *)0x8b9d5f;
  FUN_0101b370();
  ExceptionList = pvStack_10;
  return;
}

