// addr: 0x012cf910
// name: LobbyService_dtor
// subsystem: common/common/messages
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyService_dtor(void * this) */

void __fastcall LobbyService_dtor(void *this)

{
  int *piVar1;
  int *piVar2;
  void *_Memory;
  int iVar3;
  uint uVar4;
  int iVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destroys a LobbyService, installing LobbyService::vftable, clearing the
                       global instance pointer if needed, deleting owned components, maps, vectors,
                       and buffers, then running base cleanup. Evidence is the explicit
                       LobbyService::vftable assignment and destructor-style cleanup. */
  puStack_8 = &LAB_0166fd5d;
  local_c = ExceptionList;
  uVar4 = DAT_01b839d8 ^ (uint)&stack0xffffffd0;
  ExceptionList = &local_c;
  *(undefined ***)this = LobbyService::vftable;
  local_4 = 6;
  if (DAT_01cbd6a0 == this) {
    DAT_01cbd6a0 = (void *)0x0;
  }
  clearCompositeContainerFields((int)this);
  piVar1 = *(int **)((int)this + 8);
  piVar2 = (int *)*piVar1;
  while( true ) {
    if (this == (void *)0xfffffffc) {
      FUN_00d83c2d(uVar4);
    }
    if (piVar2 == piVar1) break;
    if (this == (void *)0xfffffffc) {
      FUN_00d83c2d(uVar4);
    }
    if (piVar2 == (int *)*(int *)((int)this + 8)) {
      FUN_00d83c2d(uVar4);
    }
    if ((undefined4 *)piVar2[4] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)piVar2[4])(1);
    }
    FUN_012cb410();
  }
  _Memory = *(void **)(*(int *)((int)this + 8) + 4);
  if (*(char *)((int)_Memory + 0x15) == '\0') {
    FUN_012cbfe0(*(undefined4 *)((int)_Memory + 8));
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  *(int *)(*(int *)((int)this + 8) + 4) = *(int *)((int)this + 8);
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)*(undefined4 *)((int)this + 8) = *(undefined4 *)((int)this + 8);
  *(int *)(*(int *)((int)this + 8) + 8) = *(int *)((int)this + 8);
  local_4 = CONCAT31(local_4._1_3_,5);
  MessageDB_IntTextMap_dtor((void *)((int)this + 100));
  if (*(void **)((int)this + 0x58) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x58));
  }
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  if (*(void **)((int)this + 0x48) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x48));
  }
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  FUN_012cf0b0();
  iVar5 = *(int *)((int)this + 0x24);
  if (iVar5 != 0) {
    iVar3 = *(int *)((int)this + 0x28);
    for (; iVar5 != iVar3; iVar5 = iVar5 + 0x38) {
      FUN_012a2730();
    }
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x24));
  }
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  iVar5 = *(int *)((int)this + 0x14);
  if (iVar5 != 0) {
    iVar3 = *(int *)((int)this + 0x18);
    for (; iVar5 != iVar3; iVar5 = iVar5 + 0x38) {
      FUN_012a2730();
    }
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x14));
  }
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  FUN_012ce8f0();
  ExceptionList = puStack_8;
  return;
}

