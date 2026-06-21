// addr: 0x01347280
// name: Card_emitActionTextMessage
// subsystem: common/review2
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 __fastcall
Card_emitActionTextMessage
          (undefined4 param_1,int param_2,int *param_3,undefined4 param_4,void *param_5)

{
  void *pvVar1;
  void *pvVar2;
  undefined4 uVar3;
  int messageId_;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar4;
  int iVar5;
  int *piVar6;
  uint unaff_EBP;
  undefined1 *puVar7;
  int local_128;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbStack_124;
  undefined1 auStack_120 [4];
  void *pvStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_10c;
  uint uStack_108;
  void *pvStack_104;
  undefined1 auStack_100 [8];
  undefined1 auStack_f8 [48];
  undefined1 auStack_c8 [8];
  undefined1 local_c0 [140];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_34 [4];
  undefined1 uStack_30;
  void *pvStack_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  uint uStack_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Looks up a card action, evaluates its message ValueData, formats message
                       text, constructs a CommandObjectEmitTextMessage, and executes/enqueues it in
                       a CommandObjectList. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0167d1da;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)&local_128;
  pvVar1 = (void *)(DAT_01b839d8 ^ (uint)&stack0xfffffec8);
  ExceptionList = &local_c;
  local_128 = 0;
  pvVar2 = Card_getActionByID(param_3,param_2);
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    EvaluationEnvironment_ctor();
    local_4 = 0;
    EvaluationEnvironment_copyFrom(local_c0,param_5,pvVar1);
    (**(code **)(*param_3 + 0x100))(pvVar2,local_c0);
    uStack_1c = 0xf;
    uStack_20 = 0;
    uStack_30 = 0;
    local_c._0_1_ = 1;
    FUN_012fa910();
    local_c._0_1_ = 2;
    uVar3 = FUN_01322490();
    FUN_013010e0(uVar3);
    if (local_128 == 5) {
      FUN_01301590(auStack_c8);
    }
    if (local_128 == 3) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                (abStack_34,pbStack_124,0,0xffffffff);
    }
    else if (local_128 == 2) {
      pvVar1 = EvaluationEnvironment_getGame(param_5);
      iVar5 = *(int *)((int)pvVar1 + 0x20);
      messageId_ = FUN_0123c340();
      puVar7 = auStack_120;
      pvVar1 = (void *)FUN_012a84b0();
      pbVar4 = MessageDB_getMessageText(pvVar1,puVar7,messageId_,iVar5);
      local_c._0_1_ = 3;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                (abStack_34,pbVar4,0,0xffffffff);
      local_c._0_1_ = 2;
      if (0xf < uStack_108) {
                    /* WARNING: Subroutine does not return */
        _free(pvStack_11c);
      }
      uStack_108 = 0xf;
      uStack_10c = 0;
      pvStack_11c = (void *)((uint)pvStack_11c & 0xffffff00);
    }
    else {
      if (local_128 == 10) {
        puVar7 = auStack_120;
        FUN_012fa7e0(puVar7);
        pbVar4 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 MessageText_formatWithValueData(puVar7);
        local_c = (void *)CONCAT31(local_c._1_3_,4);
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                  (abStack_34,pbVar4,0,0xffffffff);
      }
      else {
        pvVar1 = ValueData_toString(&stack0xfffffed4,auStack_120);
        local_c = (void *)CONCAT31(local_c._1_3_,5);
        if (*(uint *)((int)pvVar1 + 0x18) < 0x10) {
          iVar5 = (int)pvVar1 + 4;
        }
        else {
          iVar5 = *(int *)((int)pvVar1 + 4);
        }
        FUN_012f5dc0("couldn\'t get messageValue from valueData: %s",iVar5);
      }
      local_c._0_1_ = 2;
      FUN_0041f1d7();
    }
    pvStack_104 = Mem_Alloc(0x154);
    if (pvStack_104 == (void *)0x0) {
      piVar6 = (int *)0x0;
    }
    else {
      pvStack_11c = (void *)0x0;
      uStack_118 = 0;
      uStack_114 = 0;
      local_c = (void *)CONCAT31(local_c._1_3_,7);
      unaff_EBP = 1;
      piVar6 = (int *)CommandObjectEmitTextMessage_doCommand(abStack_34,3,auStack_120,auStack_c8);
    }
    local_c = (void *)0x2;
    if ((unaff_EBP & 1) != 0) {
      FUN_012ce9d0();
    }
    CommandObjectList_ctor(auStack_100);
    local_c = (void *)CONCAT31(local_c._1_3_,9);
    (**(code **)(*piVar6 + 0x70))(auStack_c8);
    (**(code **)(*piVar6 + 0x44))(&pvStack_104);
    (**(code **)*piVar6)(1);
    local_4._0_1_ = 2;
    CommandObjectList_dtor(auStack_f8);
    local_4._0_1_ = 1;
    FUN_01300cd0();
    local_4 = (uint)local_4._1_3_ << 8;
    if (0xf < uStack_14) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_28);
    }
    uStack_14 = 0xf;
    uStack_18 = 0;
    pvStack_28 = (void *)((uint)pvStack_28 & 0xffffff00);
    local_4 = 0xffffffff;
    FUN_01385460();
    uVar3 = 1;
  }
  ExceptionList = local_c;
  return uVar3;
}

