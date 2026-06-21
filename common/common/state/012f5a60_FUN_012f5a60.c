// addr: 0x012f5a60
// name: FUN_012f5a60
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void FUN_012f5a60(char *param_1,char *param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  void *this;
  char *pcVar3;
  void *this_00;
  void *local_48;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_44 [4];
  void *local_40;
  undefined4 local_30;
  uint local_2c;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_28 [4];
  void *local_24;
  undefined4 local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates or lazily initializes an object/helper and wires it into the owning
                       object. Exact class identity is unknown. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01674823;
  local_c = ExceptionList;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xffffffa8;
  ExceptionList = &local_c;
  local_48 = Mem_Alloc(100);
  local_4 = 0;
  if (local_48 == (void *)0x0) {
    this = (void *)0x0;
  }
  else {
    this = (void *)Exception_ctor(uVar2);
  }
  local_4 = 0xffffffff;
  local_2c = 0xf;
  local_30 = 0;
  local_40 = (void *)((uint)local_40 & 0xffffff00);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (local_44,"Reached a wa_assert",0x13);
  local_4 = 1;
  Exception_setMessage(this,local_44);
  local_4 = 0xffffffff;
  if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
    _free(local_40);
  }
  local_2c = 0xf;
  local_30 = 0;
  local_40 = (void *)((uint)local_40 & 0xffffff00);
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  pcVar3 = param_1;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (local_28,param_1,(int)pcVar3 - (int)(param_1 + 1));
  local_4 = 2;
  Exception_setFunctionName(this,local_28);
  local_4 = 0xffffffff;
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  local_2c = 0xf;
  local_30 = 0;
  local_40 = (void *)((uint)local_40 & 0xffffff00);
  pcVar3 = param_2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (local_44,param_2,(int)pcVar3 - (int)(param_2 + 1));
  local_4 = 3;
  Exception_setSourceFile(this,local_44);
  local_4 = 0xffffffff;
  if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
    _free(local_40);
  }
  local_2c = 0xf;
  local_30 = 0;
  local_40 = (void *)((uint)local_40 & 0xffffff00);
  Exception_setLineNumber(this,param_3);
  this_00 = Game_findByID(1);
  if (this_00 != (void *)0x0) {
    Game_logException(this_00,this);
  }
  local_48 = this;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(&local_48,&DAT_01aa602c);
}

