// addr: 0x01449280
// name: TcgCardOrGameRecord_assignFields
// subsystem: common/tcg/client
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall
TcgCardOrGameRecord_assignFields
          (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
          undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,void *param_10
          )

{
  undefined1 *puVar1;
  void *lastNode;
  undefined4 *puVar2;
  undefined4 in_stack_00000034;
  uint in_stack_00000038;
  void *in_stack_00000040;
  undefined4 in_stack_00000050;
  uint in_stack_00000054;
  undefined1 in_stack_00000070;
  undefined1 local_14 [8];
  void *local_c;
  undefined1 *puStack_8;
  void *local_4;
  
                    /* Assigns many scalar and string fields into a 0x80+ byte record, copies two
                       rb-tree members, stores coordinate/pair fields, then cleans temporary inputs.
                        */
  puStack_8 = &LAB_0169a370;
  local_c = ExceptionList;
  lastNode = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffffe0);
  ExceptionList = &local_c;
  local_4 = (void *)0x3;
  *(undefined4 *)(param_1 + 0xc) = param_2;
  *(undefined4 *)(param_1 + 0x10) = param_3;
  *(undefined1 *)(param_1 + 8) = in_stack_00000070;
  *(undefined4 *)(param_1 + 0x18) = param_5;
  *(undefined4 *)(param_1 + 0x1c) = param_6;
  *(undefined4 *)(param_1 + 0x14) = param_4;
  *(undefined4 *)(param_1 + 0x34) = param_8;
  *(undefined4 *)(param_1 + 0x30) = param_7;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x38),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             &param_9,0,0xffffffff);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x54),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             &stack0x0000003c,0,0xffffffff);
  puVar1 = (undefined1 *)(param_1 + 0x70);
  if (puVar1 != &stack0x00000058) {
    StdRbTree_eraseRange
              (puVar1,local_14,puVar1,(void *)**(undefined4 **)(param_1 + 0x74),puVar1,
               *(undefined4 **)(param_1 + 0x74),lastNode);
    StdTree_Node21_assignFromTree(puVar1,&stack0x00000058,lastNode);
  }
  puVar1 = (undefined1 *)(param_1 + 0x7c);
  if (puVar1 != &stack0x00000064) {
    StdRbTree_eraseRange
              (puVar1,local_14,puVar1,(void *)**(undefined4 **)(param_1 + 0x80),puVar1,
               *(undefined4 **)(param_1 + 0x80),lastNode);
    StdTree_Node21_assignFromTree(puVar1,&stack0x00000064,lastNode);
  }
  puVar2 = (undefined4 *)FUN_00702670(local_14);
  *(undefined4 *)(param_1 + 0x20) = *puVar2;
  *(undefined4 *)(param_1 + 0x24) = puVar2[1];
  puVar2 = (undefined4 *)FUN_00702670(local_14);
  *(undefined4 *)(param_1 + 0x28) = *puVar2;
  *(undefined4 *)(param_1 + 0x2c) = puVar2[1];
  local_4 = (void *)CONCAT31(local_4._1_3_,2);
  if (0xf < in_stack_00000038) {
                    /* WARNING: Subroutine does not return */
    _free(param_10);
  }
  in_stack_00000038 = 0xf;
  in_stack_00000034 = 0;
  param_10 = (void *)((uint)param_10 & 0xffffff00);
  local_4 = (void *)CONCAT31(local_4._1_3_,1);
  if (0xf < in_stack_00000054) {
                    /* WARNING: Subroutine does not return */
    _free(in_stack_00000040);
  }
  in_stack_00000054 = 0xf;
  in_stack_00000050 = 0;
  in_stack_00000040 = (void *)((uint)in_stack_00000040 & 0xffffff00);
  local_4 = (void *)((uint)local_4._1_3_ << 8);
  StdRbTree_destroyAndFree(&stack0x00000058);
  StdRbTree_destroyAndFree(&stack0x00000068);
  ExceptionList = local_4;
  return;
}

