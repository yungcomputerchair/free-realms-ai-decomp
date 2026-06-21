// addr: 0x01536df0
// name: OdbLookup_save
// subsystem: common/common/db
// source (binary assert): common/common/db/odblookup.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: void OdbLookup_save(void * this) */

void __fastcall OdbLookup_save(void *this)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  FILE *_File;
  undefined4 *puVar5;
  size_t sVar6;
  size_t sVar7;
  void *pvVar8;
  char *pcVar9;
  FILE *stream;
  undefined1 auStack_64 [4];
  int local_60;
  undefined4 *local_5c;
  void *local_58;
  undefined1 local_54 [24];
  undefined4 *local_3c;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_38 [4];
  void *local_34;
  undefined4 local_24;
  uint local_20;
  uint local_1c;
  void *local_14;
  undefined1 *puStack_10;
  uint local_c;
  
                    /* Serializes the ODB lookup state to its backing file: record/location entries,
                       name-to-record-id entries, then writes the packet buffer and asserts the full
                       buffer length was written. */
  local_c = 0xffffffff;
  puStack_10 = &LAB_016bc0c0;
  local_14 = ExceptionList;
  local_1c = DAT_01b839d8 ^ (uint)auStack_64;
  uVar3 = DAT_01b839d8 ^ (uint)&stack0xffffff90;
  ExceptionList = &local_14;
  local_58 = this;
  PacketBuffer_init(local_54);
  local_c = 0;
  Serializer_appendInteger(local_54,*(uint *)((int)this + 0x30));
  local_3c = *(undefined4 **)((int)this + 0x2c);
  local_5c = (undefined4 *)*local_3c;
  local_60 = (int)this + 0x28;
  while( true ) {
    puVar5 = local_5c;
    iVar2 = local_60;
    if ((local_60 == 0) || (local_60 != (int)this + 0x28)) {
      FUN_00d83c2d(uVar3);
    }
    pvVar8 = local_58;
    if (puVar5 == local_3c) break;
    if (iVar2 == 0) {
      FUN_00d83c2d(uVar3);
    }
    if (puVar5 == *(undefined4 **)(iVar2 + 4)) {
      FUN_00d83c2d();
    }
    Serializer_appendInteger(local_54,puVar5[3]);
    if (puVar5 == *(undefined4 **)(iVar2 + 4)) {
      FUN_00d83c2d();
    }
    Serializer_appendInteger(local_54,puVar5[4]);
    if (puVar5 == *(undefined4 **)(iVar2 + 4)) {
      FUN_00d83c2d();
    }
    Serializer_appendInteger(local_54,puVar5[5]);
    FUN_015132b0();
  }
  Serializer_appendInteger(local_54,*(uint *)((int)local_58 + 0x24));
  local_3c = *(undefined4 **)((int)pvVar8 + 0x20);
  local_60 = (int)pvVar8 + 0x1c;
  local_5c = (undefined4 *)*local_3c;
  while( true ) {
    puVar5 = local_5c;
    iVar2 = local_60;
    if ((local_60 == 0) || (local_60 != (int)pvVar8 + 0x1c)) {
      FUN_00d83c2d();
    }
    if (puVar5 == local_3c) break;
    if (iVar2 == 0) {
      FUN_00d83c2d();
    }
    if (puVar5 == *(undefined4 **)(iVar2 + 4)) {
      FUN_00d83c2d();
    }
    if ((uint)puVar5[9] < 0x10) {
      pcVar9 = (char *)(puVar5 + 4);
    }
    else {
      pcVar9 = (char *)puVar5[4];
    }
    local_20 = 0xf;
    local_24 = 0;
    local_34 = (void *)((uint)local_34 & 0xffffff00);
    pcVar4 = pcVar9;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (local_38,pcVar9,(int)pcVar4 - (int)(pcVar9 + 1));
    local_c = CONCAT31(local_c._1_3_,1);
    Serializer_appendString(local_54,local_38);
    if (puVar5 == *(undefined4 **)(iVar2 + 4)) {
      FUN_00d83c2d();
    }
    Serializer_appendInteger(local_54,puVar5[10]);
    local_c = local_c & 0xffffff00;
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      _free(local_34);
    }
    local_20 = 0xf;
    local_24 = 0;
    local_34 = (void *)((uint)local_34 & 0xffffff00);
    FUN_01512d40();
    pvVar8 = local_58;
  }
  if (*(uint *)((int)pvVar8 + 0x18) < 0x10) {
    pcVar9 = (char *)((int)pvVar8 + 4);
  }
  else {
    pcVar9 = *(char **)((int)pvVar8 + 4);
  }
  _File = _fopen(pcVar9,"wb");
  puVar5 = PacketBuffer_identity(local_54);
  stream = _File;
  sVar6 = PacketBuffer_getSize(local_54);
  sVar6 = _fwrite((void *)*puVar5,1,sVar6,stream);
  _fclose(_File);
  sVar7 = PacketBuffer_getSize(local_54);
  if (sVar6 != sVar7) {
    FUN_012f5a60("length == dbBuffer.length()","..\\common\\common\\db\\odblookup.cpp",0x78);
  }
  local_c = 0xffffffff;
  RawBuffer_free(local_54);
  ExceptionList = local_14;
  return;
}

