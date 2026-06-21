// addr: 0x013c4180
// name: ResourceFile_loadResolvedPath
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: bool ResourceFile_loadResolvedPath(void * this, void * stream, void * arg) */

bool __thiscall ResourceFile_loadResolvedPath(void *this,void *stream,void *arg)

{
  char cVar1;
  undefined1 uVar2;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar3;
  undefined4 uStack_50;
  void *local_4c;
  void *pvStack_48;
  undefined4 uStack_38;
  uint uStack_34;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_30 [4];
  void *pvStack_2c;
  undefined1 local_28;
  uint local_18;
  undefined4 local_14;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Reads an entry name, builds a resolved path, assigns it into a temporary
                       string, then dispatches virtual loader 0x18. */
  puStack_8 = &LAB_016897b0;
  local_c = ExceptionList;
  local_10 = (void *)(DAT_01b839d8 ^ (uint)&uStack_50);
  ExceptionList = &local_c;
  local_4c = arg;
  local_14 = 0xf;
  local_18 = 0;
  local_28 = 0;
  local_4 = 0;
  cVar1 = (**(code **)(*(int *)this + 0x10))(stream,DAT_01b839d8 ^ (uint)&stack0xffffffa0);
  if (cVar1 == '\0') {
    puStack_8 = (undefined1 *)0xffffffff;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_2c);
    }
    uVar2 = 0;
  }
  else {
    pbVar3 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             ResourceFile_buildResolvedPath((int)this + 8,(int)this + 0x24);
    puStack_8._0_1_ = 1;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (abStack_30,pbVar3,0,0xffffffff);
    puStack_8 = (undefined1 *)((uint)puStack_8._1_3_ << 8);
    if (0xf < uStack_34) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_48);
    }
    uStack_34 = 0xf;
    uStack_38 = 0;
    pvStack_48 = (void *)((uint)pvStack_48 & 0xffffff00);
    uVar2 = (**(code **)(*(int *)this + 0x18))(abStack_30,uStack_50);
    puStack_8 = (undefined1 *)0xffffffff;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_2c);
    }
  }
  ExceptionList = local_10;
  return (bool)uVar2;
}

