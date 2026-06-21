// addr: 0x0136b7a0
// name: PlayArea_addOrUpdateElementMetadata
// subsystem: common/tcg/client
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
PlayArea_addOrUpdateElementMetadata
          (int param_1,undefined4 param_2,undefined4 param_3,char param_4,undefined4 param_5,
          undefined4 param_6,void *param_7)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 in_stack_00000028;
  uint in_stack_0000002c;
  void *in_stack_00000034;
  undefined4 in_stack_00000038;
  undefined4 in_stack_0000003c;
  undefined1 local_bc [8];
  undefined4 local_b4;
  undefined1 local_b0;
  undefined1 local_ac;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_a8 [28];
  undefined1 local_8c [16];
  undefined1 local_7c [32];
  undefined1 local_5c [36];
  undefined1 local_38 [40];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
                    /* Looks up an entry in a tree at this+0x200 by key; if missing and the create
                       flag is set, builds metadata from input strings/fields and inserts it via
                       helper 0133f0f0. */
  puStack_8 = &LAB_016803a3;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)local_bc;
  uVar3 = DAT_01b839d8 ^ (uint)&stack0xffffff34;
  ExceptionList = &local_c;
  local_4 = 1;
  piVar4 = (int *)FUN_01331340(local_bc,&param_2);
  iVar1 = piVar4[1];
  iVar2 = *(int *)(param_1 + 0x204);
  if ((*piVar4 == 0) || (*piVar4 != param_1 + 0x200)) {
    FUN_00d83c2d(uVar3);
  }
  if (iVar1 == iVar2) {
    if (param_4 == '\x01') {
      FUN_01332310(&param_5,&param_6);
      local_4._0_1_ = 2;
      FUN_013326d0(&param_4,local_7c);
      local_4._0_1_ = 3;
      FUN_01333810(&param_3,local_5c);
      local_4._0_1_ = 4;
      FUN_01334c70(local_38,&stack0x00000030);
      local_4._0_1_ = 5;
      puVar5 = (undefined4 *)FUN_0133f0f0(&param_2);
      *puVar5 = local_b4;
      *(undefined1 *)(puVar5 + 1) = local_b0;
      *(undefined1 *)(puVar5 + 2) = local_ac;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(puVar5 + 3),
                 local_a8,0,0xffffffff);
      FUN_005f1e5c(local_8c);
      local_4._0_1_ = 4;
      FUN_01331b60();
      local_4._0_1_ = 3;
      FUN_01331b10();
      local_4._0_1_ = 2;
      FUN_01331ac0();
      local_4 = CONCAT31(local_4._1_3_,1);
      FUN_01331a50();
    }
    local_4 = local_4 & 0xffffff00;
    if (0xf < in_stack_0000002c) {
                    /* WARNING: Subroutine does not return */
      _free(param_7);
    }
  }
  else {
    local_4 = local_4 & 0xffffff00;
    if (0xf < in_stack_0000002c) {
                    /* WARNING: Subroutine does not return */
      _free(param_7);
    }
  }
  param_7 = (void *)((uint)param_7 & 0xffffff00);
  in_stack_0000002c = 0xf;
  in_stack_00000028 = 0;
  local_4 = 0xffffffff;
  if (in_stack_00000034 == (void *)0x0) {
    ExceptionList = local_c;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(in_stack_00000034);
}

