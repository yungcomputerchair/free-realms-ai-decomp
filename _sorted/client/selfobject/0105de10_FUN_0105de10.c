// addr: 0x0105de10
// name: FUN_0105de10
// subsystem: common/client/selfobject
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void FUN_0105de10(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_8;
  undefined4 local_4;
  
                    /* Looks up a two-dword key from fields +0xd8/+0xdc and inserts/registers the
                       object if it is not already present. The container/class identity is not
                       evident. */
  uVar1 = *(undefined4 *)(param_1 + 0xd8);
  uVar2 = *(undefined4 *)(param_1 + 0xdc);
  local_8 = uVar1;
  local_4 = uVar2;
  iVar3 = FUN_0105c450(&local_8);
  if (iVar3 == 0) {
    local_8 = uVar1;
    local_4 = uVar2;
    FUN_0105daf0(&local_8,&param_1);
  }
  return;
}

