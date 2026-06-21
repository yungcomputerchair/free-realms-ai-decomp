// addr: 0x013c3f10
// name: ResourceFile_writeToDisk
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: bool ResourceFile_writeToDisk(void * this) */

bool __thiscall ResourceFile_writeToDisk(void *this)

{
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar1;
  char ****_Filename;
  FILE *_File;
  undefined4 *puVar2;
  size_t sVar3;
  size_t sVar4;
  void *in_stack_00000008;
  FILE *stream;
  undefined1 local_48 [4];
  void *local_44;
  undefined4 local_34;
  uint local_30;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_2c [4];
  char ***local_28 [4];
  undefined4 local_18;
  uint local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Builds the resolved resource file path, opens it for binary write, writes the
                       current packet buffer contents, closes the file, and returns whether the full
                       buffer was written. Evidence is ResourceFile_buildResolvedPath, fopen('wb'),
                       fwrite, and PacketBuffer_getSize. */
  puStack_8 = &LAB_01689740;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)local_48;
  ExceptionList = &local_c;
  local_14 = 0xf;
  local_18 = 0;
  local_28[0] = (char ***)((uint)local_28[0] & 0xffffff00);
  local_4 = 0;
  pbVar1 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
           ResourceFile_buildResolvedPath
                     ((int)this + 8,(int)this + 0x24,DAT_01b839d8 ^ (uint)&stack0xffffffa8);
  local_4._0_1_ = 1;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (local_2c,pbVar1,0,0xffffffff);
  local_4 = (uint)local_4._1_3_ << 8;
  if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
    _free(local_44);
  }
  local_30 = 0xf;
  local_34 = 0;
  local_44 = (void *)((uint)local_44 & 0xffffff00);
  _Filename = (char ****)local_28[0];
  if (local_14 < 0x10) {
    _Filename = local_28;
  }
  _File = _fopen((char *)_Filename,"wb");
  if (_File == (FILE *)0x0) {
    local_4 = 0xffffffff;
    if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
      _free(local_28[0]);
    }
  }
  else {
    puVar2 = PacketBuffer_identity(in_stack_00000008);
    stream = _File;
    sVar3 = PacketBuffer_getSize(in_stack_00000008);
    sVar3 = _fwrite((void *)*puVar2,1,sVar3,stream);
    _fclose(_File);
    sVar4 = PacketBuffer_getSize(in_stack_00000008);
    if (sVar3 == sVar4) {
      local_4 = 0xffffffff;
      if (local_14 < 0x10) {
        ExceptionList = local_c;
        return true;
      }
                    /* WARNING: Subroutine does not return */
      _free(local_28[0]);
    }
    local_4 = 0xffffffff;
    if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
      _free(local_28[0]);
    }
  }
  ExceptionList = local_c;
  return false;
}

