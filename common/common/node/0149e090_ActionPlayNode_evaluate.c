// addr: 0x0149e090
// name: ActionPlayNode_evaluate
// subsystem: common/common/node
// source (binary assert): common/common/node/ActionPlayNode.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: bool ActionPlayNode_evaluate(void * this, void * environment) */

bool __thiscall ActionPlayNode_evaluate(void *this,void *environment)

{
  int iVar1;
  undefined3 uVar2;
  void *commandObject;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar3;
  void *env;
  undefined1 local_64 [8];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *local_5c;
  undefined1 local_58 [4];
  int local_54;
  void *pvStack_4c;
  undefined1 local_48 [4];
  void *local_44;
  undefined4 local_34;
  uint local_30;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_2c [4];
  void *local_28;
  int local_18;
  uint local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Evaluates ActionPlayNode, prepares prompt text defaulting to "Choose a card
                       to play", validates validTargets as an expression tree, and enqueues a play
                       command. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a414b;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)local_64;
  commandObject = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffff8c);
  ExceptionList = &local_c;
  iVar1 = **(int **)((int)this + 8);
  FUN_012fa910();
  local_14 = 0xf;
  local_18 = 0;
  local_28 = (void *)((uint)local_28 & 0xffffff00);
  local_4._1_3_ = 0;
  uVar2 = local_4._1_3_;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  if (*(int *)((int)this + 0x14) != 0) {
    pbVar3 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             MessageText_formatWithValueData(local_48);
    local_4._0_1_ = 2;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (local_2c,pbVar3,0,0xffffffff);
    local_4._0_1_ = 1;
    if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
      _free(local_44);
    }
    local_30 = 0xf;
    local_34 = 0;
    local_44 = (void *)((uint)local_44 & 0xffffff00);
    uVar2 = local_4._1_3_;
  }
  local_4._1_3_ = uVar2;
  local_4._0_1_ = 1;
  if (local_18 == 0) {
    FUN_01300680(3);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (local_5c,"Choose a card to play",0x15);
  }
  else {
    FUN_01300680(3);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (local_5c,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                         *)local_2c,0,0xffffffff);
  }
  FUN_012fa910();
  local_4 = CONCAT31(local_4._1_3_,3);
  if (iVar1 == *(int *)((int)this + 8)) {
    FUN_00d83c2d();
  }
  FUN_013010e0(*(undefined4 *)(iVar1 + 0x10));
  if (local_54 != 5) {
    FUN_012f5a60("validTargets.isExpressionTreeValue()",
                 "..\\common\\common\\node\\ActionPlayNode.cpp",0xc0);
  }
  pvStack_4c = Mem_Alloc(0x124);
  local_4._0_1_ = 4;
  if (pvStack_4c == (void *)0x0) {
    env = (void *)0x0;
  }
  else {
    env = (void *)CommandObject_Reveal_ctor
                            (local_58,*(undefined4 *)((int)this + 0x10),local_64,environment);
  }
  local_4._0_1_ = 3;
  EvaluationEnvironment_addCommandObject(environment,env,commandObject);
  local_4._0_1_ = 1;
  FUN_01300cd0();
  local_4 = (uint)local_4._1_3_ << 8;
  if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
    _free(local_28);
  }
  local_14 = 0xf;
  local_18 = 0;
  local_28 = (void *)((uint)local_28 & 0xffffff00);
  local_4 = 0xffffffff;
  FUN_01300cd0();
  ExceptionList = local_c;
  return true;
}

