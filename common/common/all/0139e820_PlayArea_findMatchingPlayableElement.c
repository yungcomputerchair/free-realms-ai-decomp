// addr: 0x0139e820
// name: PlayArea_findMatchingPlayableElement
// subsystem: common/common/all
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool PlayArea_findMatchingPlayableElement(void * this, void * criteria, void
   ** outElement, void * outData) */

bool __thiscall
PlayArea_findMatchingPlayableElement(void *this,void *criteria,void **outElement,void *outData)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  int *piVar6;
  undefined4 unaff_retaddr;
  undefined1 auStack_2c [16];
  int *local_1c;
  int *local_18;
  undefined4 local_14;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Iterates the PlayArea elements returned by a virtual accessor, tests active
                       elements against supplied criteria, and returns the first matching element.
                       On success it stores the matching element pointer. */
  puStack_8 = &LAB_01685560;
  local_c = ExceptionList;
  uVar5 = DAT_01b839d8 ^ (uint)&stack0xffffffc4;
  ExceptionList = &local_c;
  local_18 = (int *)0x0;
  local_14 = 0;
  local_10 = (void *)0x0;
  local_4 = 0;
  *(undefined4 *)outData = 0;
  (**(code **)(*(int *)this + 0x34))(&local_1c,uVar5);
  piVar2 = local_18;
  if (local_18 < local_1c) {
    FUN_00d83c2d();
  }
  piVar6 = local_1c;
  if (local_18 < local_1c) {
    FUN_00d83c2d();
  }
  while( true ) {
    if (&stack0x00000000 == (undefined1 *)0x20) {
      FUN_00d83c2d();
    }
    if (piVar6 == piVar2) break;
    if (&stack0x00000000 == (undefined1 *)0x20) {
      FUN_00d83c2d();
    }
    if (local_18 <= piVar6) {
      FUN_00d83c2d();
    }
    piVar1 = (int *)*piVar6;
    if (piVar1[0x19] != 0) {
      FUN_012fa910();
      puStack_8._0_1_ = 1;
      cVar3 = (**(code **)(*piVar1 + 4))(unaff_retaddr,auStack_2c);
      if ((cVar3 != '\0') && (bVar4 = ValueData_equivalentTo(criteria,auStack_2c), bVar4)) {
        *outElement = piVar1;
        puStack_8 = (undefined1 *)((uint)puStack_8._1_3_ << 8);
        FUN_01300cd0();
        puStack_8 = (undefined1 *)0xffffffff;
        if (local_1c == (int *)0x0) {
          ExceptionList = local_10;
          return true;
        }
                    /* WARNING: Subroutine does not return */
        _free(local_1c);
      }
      puStack_8 = (undefined1 *)((uint)puStack_8._1_3_ << 8);
      FUN_01300cd0();
    }
    if (local_18 <= piVar6) {
      FUN_00d83c2d();
    }
    piVar6 = piVar6 + 1;
  }
  puStack_8 = (undefined1 *)0xffffffff;
  if (local_1c == (int *)0x0) {
    ExceptionList = local_10;
    return false;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_1c);
}

