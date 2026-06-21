// addr: 0x013e9210
// name: TcgRecordList_createOrUpdateRecord
// subsystem: common/tcg/client
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall
TcgRecordList_createOrUpdateRecord
          (int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
          void *param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,undefined4 param_10
          ,uint param_11,undefined4 param_12,void *param_13)

{
  int iVar1;
  void *pvVar2;
  undefined4 unaff_retaddr;
  undefined4 in_stack_00000040;
  uint in_stack_00000044;
  undefined4 in_stack_0000006c;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_90 [4];
  undefined1 uStack_8c;
  undefined4 uStack_84;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_74 [4];
  undefined1 uStack_70;
  undefined4 uStack_60;
  undefined1 auStack_58 [4];
  undefined4 uStack_54;
  undefined1 *puStack_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Obtains or allocates a record object, copies value-list and string inputs,
                       assigns fields via TcgCardOrGameRecord_assignFields, and adds/updates it
                       through virtual callbacks. */
  puStack_8 = &LAB_0168e41b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 3;
  iVar1 = (**(code **)(*param_1 + 0x18))();
  if (iVar1 == 0) {
    pvVar2 = Mem_Alloc(0xb0);
    local_c._0_1_ = 4;
    if (pvVar2 == (void *)0x0) {
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_0144a100();
    }
    local_c._0_1_ = 3;
    uStack_54 = 0x13e92a8;
    EventCommand_ValueList_copyConstruct(&stack0xffffffb4,&stack0x00000060);
    local_c._0_1_ = 5;
    uStack_60 = 0x13e92c3;
    EventCommand_ValueList_copyConstruct(auStack_58,&stack0x00000054);
    local_c._0_1_ = 6;
    uStack_60 = 0;
    uStack_70 = 0;
    uStack_84 = 0x13e92ee;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (abStack_74,
               (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               &stack0x00000038,0,0xffffffff);
    local_c._0_1_ = 7;
    puStack_18 = abStack_90;
    uStack_8c = 0;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (abStack_90,
               (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               &param_8,0,0xffffffff);
    local_c = (void *)CONCAT31(local_c._1_3_,3);
    TcgCardOrGameRecord_assignFields(param_2,unaff_retaddr,param_2,param_4,param_5,param_6,param_7);
    (**(code **)(*param_1 + 0x1c))();
  }
  else {
    puStack_18 = &stack0xffffffb4;
    uStack_54 = 0x13e9397;
    EventCommand_ValueList_copyConstruct(&stack0xffffffb4,&stack0x00000060);
    local_c._0_1_ = 9;
    uStack_60 = 0x13e93b2;
    EventCommand_ValueList_copyConstruct(auStack_58,&stack0x00000054);
    local_c._0_1_ = 10;
    uStack_60 = 0;
    uStack_70 = 0;
    uStack_84 = 0x13e93dd;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (abStack_74,
               (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               &stack0x00000038,0,0xffffffff);
    local_c._0_1_ = 0xb;
    uStack_8c = 0;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (abStack_90,
               (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               &param_8,0,0xffffffff);
    local_c = (void *)CONCAT31(local_c._1_3_,3);
    TcgCardOrGameRecord_assignFields(param_2,unaff_retaddr,param_2,param_4,param_5,param_6,param_7);
    (**(code **)(*param_1 + 0xac))();
  }
  if (0xf < param_11) {
                    /* WARNING: Subroutine does not return */
    _free(param_6);
  }
  param_11 = 0xf;
  param_10 = 0;
  if (0xf < in_stack_00000044) {
                    /* WARNING: Subroutine does not return */
    _free(param_13);
  }
  in_stack_00000044 = 0xf;
  in_stack_00000040 = 0;
  param_13 = (void *)((uint)param_13 & 0xffffff00);
  puStack_18 = (undefined1 *)((uint)puStack_18 & 0xffffff00);
  StdRbTree_destroyAndFree(&stack0x00000048);
  StdRbTree_destroyAndFree(&stack0x00000058);
  ExceptionList = puStack_18;
  return iVar1;
}

