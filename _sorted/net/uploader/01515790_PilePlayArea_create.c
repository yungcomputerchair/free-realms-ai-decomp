// addr: 0x01515790
// name: PilePlayArea_create
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void * PilePlayArea_create(undefined4 arg_) */

void * PilePlayArea_create(undefined4 arg_)

{
  uint uVar1;
  void *this;
  void *this_00;
  undefined4 uVar2;
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates and constructs a PilePlayArea, then performs follow-up play-area
                       initialization. Evidence is the PilePlayArea_ctor callee and play-area helper
                       calls. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b72bb;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  this = Mem_Alloc(0x48);
  local_4 = 0;
  if (this == (void *)0x0) {
    this_00 = (void *)0x0;
  }
  else {
    this_00 = PilePlayArea_ctor(this);
  }
  local_4 = 0xffffffff;
  *(void **)(in_ECX + 0x54) = this_00;
  PlayElement_setZoneOwner(this_00,*(int *)(in_ECX + 0x40));
  (**(code **)(**(int **)(in_ECX + 0x54) + 0x40))(arg_,uVar1);
  FUN_01340300(*(void **)(in_ECX + 0x54),3);
  uVar2 = PilePlayArea_create(arg_);
  ExceptionList = this;
  return (void *)CONCAT31((int3)((uint)uVar2 >> 8),1);
}

