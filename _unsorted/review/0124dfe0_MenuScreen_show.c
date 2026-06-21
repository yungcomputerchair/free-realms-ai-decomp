// addr: 0x0124dfe0
// name: MenuScreen_show
// subsystem: common/review2
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 MenuScreen_show(void)

{
  int iVar1;
  void *pvVar2;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_28 [4];
  void *local_24;
  undefined4 local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Shows or initializes the UI::MenuScreen and sends a display action through
                       DisplayActionManager with an integer argument. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01657c03;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_012e0ba0(DAT_01b839d8 ^ (uint)&stack0xffffffcc);
  iVar1 = FUN_00f9c130();
  if (iVar1 != 0) {
    local_10 = 0xf;
    local_14 = 0;
    local_24 = (void *)((uint)local_24 & 0xffffff00);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (local_28,"UI::MenuScreen",0xe);
    local_4 = 0;
    FUN_01239bc0(local_28,1,1);
    local_4 = 0xffffffff;
    if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
      _free(local_24);
    }
    local_10 = 0xf;
    local_14 = 0;
    local_24 = (void *)((uint)local_24 & 0xffffff00);
    iVar1 = FUN_012eb0a0(0,0);
    pvVar2 = Mem_Alloc(0x14);
    local_4 = 1;
    if (pvVar2 == (void *)0x0) {
      pvVar2 = (void *)0x0;
    }
    else {
      pvVar2 = (void *)FUN_012f9eb0();
    }
    local_4 = 0xffffffff;
    FUN_012f8c70(0x1ade0);
    DisplayActionBuilder_addIntArg(pvVar2,iVar1);
    DisplayActionManager_ensureSingleton();
    FUN_012d3550(pvVar2);
  }
  ExceptionList = local_c;
  return 1;
}

