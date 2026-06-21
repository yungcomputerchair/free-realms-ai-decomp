// addr: 0x012f24d0
// name: NetworkService_useGatewayEndpoint
// subsystem: common/networking
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: void NetworkService_useGatewayEndpoint(void * this) */

void __fastcall NetworkService_useGatewayEndpoint(void *this)

{
  uint uVar1;
  void *this_00;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar2;
  undefined1 *puVar3;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *name;
  undefined1 local_40 [4];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *local_3c;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *local_38;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *local_30;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_2c [4];
  void *local_28;
  undefined4 local_18;
  uint local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Switches NetworkService to gateway mode, closes the current socket, marks the
                       gateway flag, enumerates stored endpoint strings, and removes matching
                       records from a fixed record vector. Evidence: sets offset 0x4d to 1 and is
                       paired with default-endpoint setup. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016740e0;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)local_40;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffb0;
  ExceptionList = &local_c;
  NetworkService_closeSocket(this,true);
  puVar3 = local_40;
  *(undefined1 *)((int)this + 0x4d) = 1;
  FUN_012aab80(puVar3,uVar1);
  FUN_012aa280(puVar3);
  local_4 = 0;
  local_30 = local_38;
  if (local_38 < local_3c) {
    FUN_00d83c2d();
  }
  pbVar2 = local_3c;
  if (local_38 < local_3c) {
    FUN_00d83c2d();
  }
  while( true ) {
    if (&stack0x00000000 == (undefined1 *)0x40) {
      FUN_00d83c2d();
    }
    if (pbVar2 == local_30) {
      local_4 = 0xffffffff;
      if (local_3c !=
          (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)0x0) {
        StdStringRange_destroy(local_3c,local_38);
                    /* WARNING: Subroutine does not return */
        _free(local_3c);
      }
      ExceptionList = local_c;
      return;
    }
    if (&stack0x00000000 == (undefined1 *)0x40) {
      FUN_00d83c2d();
    }
    if (local_38 <= pbVar2) {
      FUN_00d83c2d();
    }
    local_14 = 0xf;
    local_18 = 0;
    local_28 = (void *)((uint)local_28 & 0xffffff00);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (local_2c,pbVar2,0,0xffffffff);
    local_4._0_1_ = 1;
    name = local_2c;
    this_00 = (void *)FUN_012aab80();
    FixedRecordVector_removeRecordByString(this_00,name);
    local_4 = (uint)local_4._1_3_ << 8;
    if (0xf < local_14) break;
    local_14 = 0xf;
    local_18 = 0;
    local_28 = (void *)((uint)local_28 & 0xffffff00);
    if (local_38 <= pbVar2) {
      FUN_00d83c2d();
    }
    pbVar2 = pbVar2 + 0x1c;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_28);
}

