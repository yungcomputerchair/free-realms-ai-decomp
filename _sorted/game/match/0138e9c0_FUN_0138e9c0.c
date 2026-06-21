// addr: 0x0138e9c0
// name: FUN_0138e9c0
// subsystem: common/game/match
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool virtualQueryContainsTransformedValue(void * thisObj, undefined4
   queryArg_) */

bool __thiscall virtualQueryContainsTransformedValue(void *this,void *thisObj,undefined4 queryArg_)

{
  uint uVar1;
  int iVar2;
  int unaff_EBP;
  uint uVar3;
  int unaff_retaddr;
  int local_4;
  
                    /* Checks whether a virtual query result list contains the
                       current/return-address-derived target after converting each element through
                       helper 01418e00. Exact class is not evident. */
  local_4 = 0;
  (**(code **)(*(int *)this + 0x214))(thisObj,&local_4);
  uVar1 = *(uint *)(unaff_EBP + 8);
  local_4 = unaff_EBP;
  if (uVar1 < *(uint *)(unaff_EBP + 4)) {
    FUN_00d83c2d();
  }
  uVar3 = *(uint *)(unaff_EBP + 4);
  if (*(uint *)(unaff_EBP + 8) < uVar3) {
    FUN_00d83c2d();
  }
  while( true ) {
    if ((unaff_EBP == 0) || (unaff_EBP != local_4)) {
      FUN_00d83c2d();
    }
    if (uVar3 == uVar1) {
      return false;
    }
    if (unaff_EBP == 0) {
      FUN_00d83c2d();
    }
    if (*(uint *)(unaff_EBP + 8) <= uVar3) {
      FUN_00d83c2d();
    }
    iVar2 = FUN_01418e00();
    if (iVar2 == unaff_retaddr) break;
    if (*(uint *)(unaff_EBP + 8) <= uVar3) {
      FUN_00d83c2d();
    }
    uVar3 = uVar3 + 4;
  }
  return true;
}

