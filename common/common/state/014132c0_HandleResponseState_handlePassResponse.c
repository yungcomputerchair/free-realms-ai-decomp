// addr: 0x014132c0
// name: HandleResponseState_handlePassResponse
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __thiscall
HandleResponseState_handlePassResponse(int *param_1,undefined4 param_2,int param_3,int param_4)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_44 [4];
  void *local_40;
  undefined4 local_30;
  uint local_2c;
  undefined1 local_28 [4];
  void *local_24;
  undefined4 local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Checks whether a response value equals the localized 'pass' string when
                       response type is 1, and if so calls the virtual handler at offset 0x80.
                       Otherwise returns 0. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01692b32;
  local_c = ExceptionList;
  uVar4 = DAT_01b839d8 ^ (uint)&stack0xffffffa8;
  ExceptionList = &local_c;
  bVar2 = false;
  bVar1 = false;
  if (param_3 == 1) {
    local_2c = 0xf;
    local_30 = 0;
    local_40 = (void *)((uint)local_40 & 0xffffff00);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(local_44,"pass",4);
    local_4 = 0;
    iVar5 = FUN_0145d850(local_28,local_44);
    local_4 = 1;
    bVar2 = true;
    bVar1 = true;
    if (*(uint *)(iVar5 + 0x18) < 0x10) {
      iVar6 = iVar5 + 4;
    }
    else {
      iVar6 = *(int *)(iVar5 + 4);
    }
    iVar5 = FUN_00f942a0(0,*(undefined4 *)(param_4 + 0x14),iVar6,*(undefined4 *)(iVar5 + 0x14));
    if (iVar5 == 0) {
      bVar3 = true;
      goto LAB_0141337c;
    }
  }
  bVar3 = false;
LAB_0141337c:
  local_4 = 0;
  if (bVar1) {
    if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
      _free(local_24);
    }
    local_10 = 0xf;
    local_14 = 0;
    local_24 = (void *)((uint)local_24 & 0xffffff00);
  }
  local_4 = 0xffffffff;
  if (bVar2) {
    if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
      _free(local_40);
    }
    local_2c = 0xf;
    local_30 = 0;
    local_40 = (void *)((uint)local_40 & 0xffffff00);
  }
  if (bVar3) {
    uVar7 = (**(code **)(*param_1 + 0x80))(param_2,uVar4);
  }
  else {
    uVar7 = 0;
  }
  ExceptionList = local_c;
  return uVar7;
}

