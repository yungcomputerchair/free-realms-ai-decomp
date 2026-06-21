// addr: 0x00a03910
// name: ClaimSystemManager_registerDataSources
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ClaimSystemManager_registerDataSources(void * this) */

void __thiscall ClaimSystemManager_registerDataSources(void *this)

{
  uint uVar1;
  void *this_00;
  undefined4 extraout_EAX;
  undefined4 uVar2;
  undefined4 in_stack_00000004;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Initializes claim-system GUI datasource state, delegating to the helper that
                       creates available-items and claim-item-contents datasources. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015ab422;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe4;
  ExceptionList = &local_c;
  *(undefined ***)this = ClientClaimManager::vftable;
  *(undefined4 *)((int)this + 4) = in_stack_00000004;
  *(undefined1 *)((int)this + 8) = 0;
  *(undefined1 *)((int)this + 9) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  FUN_00a02fd0(uVar1);
  local_4 = 0;
  this_00 = Mem_Alloc(8);
  local_4._0_1_ = 1;
  if (this_00 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    ClaimSystemManager_registerClaimDataSources(this_00);
    uVar2 = extraout_EAX;
  }
  local_4._0_1_ = 0;
  *(undefined4 *)((int)this + 0x98) = uVar2;
  FUN_00a01f60();
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_00a03570();
  ExceptionList = local_c;
  return;
}

