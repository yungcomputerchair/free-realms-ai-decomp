// addr: 0x007b8500
// name: FUN_007b8500
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall FUN_007b8500(undefined4 *param_1,int param_2)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined1 local_4;
  undefined3 uStack_3;
  
                    /* Copy-constructs a definition object with two SoeUtil::IString<char> fields
                       and a linked list of 0x24-byte child nodes. Exact class is unknown. */
  puStack_8 = &LAB_0155ee0e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = SoeUtil::IString<char>::vftable;
  param_1[1] = &DAT_01be02d8;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[4] = SoeUtil::IString<char>::vftable;
  param_1[5] = &DAT_01be02d8;
  param_1[7] = 0;
  param_1[6] = 0;
  local_4 = 1;
  uStack_3 = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  FUN_006f9e60(param_2);
  FUN_006f9e60(param_2 + 0x10);
  param_1[8] = *(undefined4 *)(param_2 + 0x20);
  for (iVar1 = *(int *)(param_2 + 0x24); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x20)) {
    pvVar2 = Mem_Alloc(0x24);
    local_4 = 2;
    if (pvVar2 == (void *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_007b8470(iVar1);
    }
    local_4 = 1;
    *(undefined4 *)(iVar3 + 0x1c) = param_1[10];
    if (param_1[10] == 0) {
      param_1[9] = iVar3;
    }
    else {
      *(int *)(param_1[10] + 0x20) = iVar3;
    }
    param_1[0xb] = param_1[0xb] + 1;
    param_1[10] = iVar3;
  }
  ExceptionList = local_c;
  return param_1;
}

