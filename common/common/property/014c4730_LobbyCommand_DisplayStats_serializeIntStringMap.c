// addr: 0x014c4730
// name: LobbyCommand_DisplayStats_serializeIntStringMap
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: uint LobbyCommand_DisplayStats_serializeIntStringMap(void * serializer_owner,
   void * map) */

uint __thiscall
LobbyCommand_DisplayStats_serializeIntStringMap(void *this,void *serializer_owner,void *map)

{
  void *pvVar1;
  undefined4 *puVar2;
  bool bVar3;
  uint3 extraout_var;
  uint uVar4;
  void *local_40;
  undefined4 *local_3c;
  undefined4 *local_38;
  void *local_34;
  undefined4 local_30;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_2c [4];
  void *local_28;
  undefined4 local_18;
  uint local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Serializes an STL map of int to string by starting a container, copying each
                       key/string pair, serializing it, destroying the temporary string, and ending
                       the container. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016aaa40;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)&local_40;
  ExceptionList = &local_c;
  local_34 = serializer_owner;
  Serializer_startAppendingSTLContainer
            (*(void **)this,*(int *)((int)serializer_owner + 8),
             DAT_01b839d8 ^ (uint)&stack0xffffffb0);
  local_38 = *(undefined4 **)((int)serializer_owner + 4);
  local_3c = (undefined4 *)*local_38;
  local_40 = serializer_owner;
  while( true ) {
    puVar2 = local_3c;
    pvVar1 = local_40;
    if ((local_40 == (void *)0x0) || (local_40 != local_34)) {
      FUN_00d83c2d();
    }
    if (puVar2 == local_38) break;
    if (pvVar1 == (void *)0x0) {
      FUN_00d83c2d();
    }
    if (puVar2 == *(undefined4 **)((int)pvVar1 + 4)) {
      FUN_00d83c2d();
    }
    local_30 = puVar2[3];
    local_14 = 0xf;
    local_18 = 0;
    local_28 = (void *)((uint)local_28 & 0xffffff00);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (local_2c,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                         *)(puVar2 + 4),0,0xffffffff);
    local_4 = 1;
    bVar3 = STLPair_intString_serialize(*(void **)this,&local_30);
    if (!bVar3) {
      local_4 = 0xffffffff;
      if (local_14 < 0x10) {
        ExceptionList = local_c;
        return (uint)extraout_var << 8;
      }
                    /* WARNING: Subroutine does not return */
      _free(local_28);
    }
    local_4 = 0xffffffff;
    if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
      _free(local_28);
    }
    local_14 = 0xf;
    local_18 = 0;
    local_28 = (void *)((uint)local_28 & 0xffffff00);
    MessageDB_RbTreeIterator_next(&local_40);
  }
  uVar4 = Serialize_returnTrue();
  ExceptionList = local_c;
  return uVar4;
}

