// addr: 0x013c3860
// name: ResourceFile_loadCachedEntry
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: bool ResourceFile_loadCachedEntry(void * this, void * path, void * outBuffer)
    */

bool __thiscall ResourceFile_loadCachedEntry(void *this,void *path,void *outBuffer)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 ***pppuVar3;
  undefined1 auStack_3c [3];
  undefined1 local_39;
  void *local_38;
  void *local_34;
  int local_30;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_2c [4];
  undefined4 **local_28 [4];
  undefined4 local_18;
  uint local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Looks up a resolved resource path in the cache tree and, if present,
                       loads/copies the cached entry into an output buffer helper. Evidence is
                       caller ResourceFile read path, string lookup at this+0x40, and buffer-loading
                       helper calls. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016895a0;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)auStack_3c;
  ExceptionList = &local_c;
  local_38 = outBuffer;
  ResourceFileCache_lowerBoundPath
            ((void *)((int)this + 0x40),&local_34,path,
             (void *)(DAT_01b839d8 ^ (uint)&stack0xffffffb4));
  iVar1 = *(int *)((int)this + 0x44);
  if ((local_34 == (void *)0x0) || (local_34 != (void *)((int)this + 0x40))) {
    FUN_00d83c2d();
  }
  if (local_30 == iVar1) {
    local_39 = 0;
  }
  else {
    if (local_34 == (void *)0x0) {
      FUN_00d83c2d();
    }
    if (local_30 == *(int *)((int)local_34 + 4)) {
      FUN_00d83c2d();
    }
    local_14 = 0xf;
    local_18 = 0;
    local_28[0] = (undefined4 **)((uint)local_28[0] & 0xffffff00);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (local_2c,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                         *)(local_30 + 0x28),0,0xffffffff);
    uVar2 = local_18;
    local_4 = 0;
    pppuVar3 = (undefined4 ***)local_28[0];
    if (local_14 < 0x10) {
      pppuVar3 = local_28;
    }
    FUN_01441fb0();
    local_4._0_1_ = 1;
    local_39 = FUN_01442020(uVar2,pppuVar3,local_38);
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_01441fc0();
    local_4 = 0xffffffff;
    if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
      _free(local_28[0]);
    }
  }
  ExceptionList = local_c;
  return (bool)local_39;
}

