// addr: 0x013c3da0
// name: ResourceFile_readBytes
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: bool ResourceFile_readBytes(void * this, void * dst, uint size, int offset,
   void * cacheKey) */

bool __thiscall ResourceFile_readBytes(void *this,void *dst,uint size,int offset,void *cacheKey)

{
  void *buffer;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar1;
  undefined4 *puVar2;
  int local_50;
  void *local_4c;
  void *local_44;
  undefined4 local_34;
  uint local_30;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_2c [4];
  void *local_28;
  undefined4 local_18;
  uint local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Ensures the resource file cache is loaded when needed, resizes/initializes
                       the destination packet buffer, and copies bytes from the resource data at the
                       requested offset. Evidence is ResourceFile_buildResolvedPath, cache load
                       helper, SerializationBuffer_resize, PacketBuffer_identity, and memcpy. */
  puStack_8 = &LAB_01689700;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)&local_50;
  ExceptionList = &local_c;
  local_50 = offset;
  local_4c = cacheKey;
  if (*(char *)((int)this + 0x50) == '\0') {
    local_14 = 0xf;
    local_18 = 0;
    local_28 = (void *)((uint)local_28 & 0xffffff00);
    local_4 = 0;
    pbVar1 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             ResourceFile_buildResolvedPath
                       ((int)this + 8,(int)this + 0x24,DAT_01b839d8 ^ (uint)&stack0xffffffa0);
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
    ResourceFile_loadCachedEntry(this,local_2c,(void *)((int)this + 0x4c));
    local_4 = 0xffffffff;
    if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
      _free(local_28);
    }
    local_14 = 0xf;
    local_18 = 0;
    local_28 = (void *)((uint)local_28 & 0xffffff00);
  }
  buffer = local_4c;
  local_4 = 0xffffffff;
  SerializationBuffer_resize(local_4c,size);
  puVar2 = PacketBuffer_identity(buffer);
  _memcpy((void *)*puVar2,(void *)(*(int *)((int)this + 0x54) + local_50),size);
  ExceptionList = local_c;
  return true;
}

