// addr: 0x00964e00
// name: PlayerProjectileEvent_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * PlayerProjectileEvent_ctor(void * this) */

void * __thiscall PlayerProjectileEvent_ctor(void *this)

{
  int *piVar1;
  uint count_;
  void *source;
  int iVar2;
  undefined4 in_stack_00000010;
  int in_stack_00000018;
  undefined1 *puStack0000001c;
  undefined1 local_2c [4];
  undefined4 local_28;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs PlayerProjectileEvent from PlayerEffectEvent, initializes
                       projectile/target members including a SoeUtil::Array<Target>, and refcounts
                       the resource. Vtable identifies the class. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01596414;
  local_c = ExceptionList;
  count_ = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  puStack0000001c = local_2c;
  PlayerEffectEvent_ctor(this);
  local_4 = 0;
  *(undefined ***)this = PlayerProjectileEvent::vftable;
  *(undefined ***)((int)this + 0x50) = PlayerProjectileEvent::vftable;
  *(undefined4 *)((int)this + 0xa0) = in_stack_00000010;
  FUN_008eb0a0();
  local_4._0_1_ = 1;
  *(undefined4 *)((int)this + 0x180) = SoeUtil::Array<Target,0,1>::vftable;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  source = *(void **)(in_stack_00000018 + 8);
  if ((int)source < 1) {
    source = (void *)0x0;
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(in_stack_00000018 + 4);
  }
  local_28 = 0x964eba;
  TargetArray_appendRange((undefined4 *)((int)this + 0x180),iVar2,source,count_);
  local_4 = CONCAT31(local_4._1_3_,2);
  piVar1 = *(int **)((int)this + 0xa0);
  iVar2 = piVar1[2];
  piVar1[2] = iVar2 + 1;
  if (iVar2 == 0) {
    (**(code **)(*piVar1 + 0x24))();
  }
  ExceptionList = local_c;
  return this;
}

