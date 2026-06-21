// addr: 0x00684411
// name: FUN_00684411
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined1 __thiscall FUN_00684411(int *param_1,undefined4 param_2,char param_3)

{
  undefined1 uVar1;
  char cVar2;
  undefined1 local_18 [4];
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
                    /* Object/hierarchy helper with insufficient class evidence: looks up an item by
                       virtual method, optionally resolves/creates it via another virtual path, then
                       clears temporary vector storage. */
  local_8 = (**(code **)(*param_1 + 0x2e0))(param_2);
  if (local_8 == -1) {
    if (param_3 != '\0') {
      local_14 = 0;
      local_10 = 0;
      local_c = 0;
      cVar2 = (**(code **)(*param_1 + 0x2dc))(local_18,&local_8,param_2);
      if (cVar2 != '\0') {
        uVar1 = (**(code **)(*param_1 + 0x2b8))(local_18,local_8);
        StdVector_clearStorage(local_18);
        return uVar1;
      }
      StdVector_clearStorage(local_18);
    }
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(*param_1 + 700))(local_8);
  }
  return uVar1;
}

