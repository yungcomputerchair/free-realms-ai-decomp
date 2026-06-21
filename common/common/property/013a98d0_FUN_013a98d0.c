// addr: 0x013a98d0
// name: FUN_013a98d0
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __fastcall FUN_013a98d0(undefined4 *param_1)

{
  uint uVar1;
  void *pvVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a sortable collection item with a PropertySet and assigned string
                       fields. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01686351;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffdc;
  ExceptionList = &local_c;
  Sortable_ctor(param_1);
  *param_1 = Account::vftable;
  param_1[8] = 0xf;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[0xf] = 0xf;
  param_1[0xe] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  local_4._1_3_ = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  local_4._0_1_ = 4;
  FUN_013a97f0(uVar1);
  local_4._0_1_ = 5;
  FUN_013a9860();
  param_1[0x28] = 0xf;
  param_1[0x27] = 0;
  *(undefined1 *)(param_1 + 0x23) = 0;
  param_1[0x2f] = 0xf;
  param_1[0x2e] = 0;
  *(undefined1 *)(param_1 + 0x2a) = 0;
  local_4._0_1_ = 8;
  param_1[1] = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 2),"",0);
  pvVar2 = Mem_Alloc(0x10);
  local_4._0_1_ = 9;
  if (pvVar2 == (void *)0x0) {
    pvVar2 = (void *)0x0;
  }
  else {
    pvVar2 = PropertySet_ctor(pvVar2);
  }
  local_4 = CONCAT31(local_4._1_3_,8);
  param_1[0x14] = pvVar2;
  param_1[0x15] = 3;
  param_1[0x16] = 2;
  param_1[0x17] = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x22),"",
             0);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x29),"",
             0);
  ExceptionList = local_c;
  return param_1;
}

