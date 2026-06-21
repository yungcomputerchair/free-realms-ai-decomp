// addr: 0x01537b40
// name: OdbLookup_load
// subsystem: common/common/db
// source (binary assert): common/common/db/odblookup.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: void OdbLookup_load(void * this, void * pathOrMode) */

void __thiscall OdbLookup_load(void *this,void *pathOrMode)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int *_Filename;
  FILE *_File;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  char ****ppppcVar8;
  char ****ppppcVar9;
  FILE *pFVar10;
  void *pvStack_a4;
  int iStack_a0;
  void *pvStack_9c;
  int iStack_98;
  int local_94;
  undefined1 local_90 [20];
  int iStack_7c;
  undefined1 local_78 [20];
  uint local_64;
  undefined1 auStack_48 [4];
  char ***apppcStack_44 [4];
  undefined4 uStack_34;
  uint uStack_30;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_2c [4];
  void *pvStack_28;
  undefined4 uStack_18;
  uint uStack_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Initializes the lookup filename and, if the file exists, reads a serialized
                       buffer, checks the byte count, then rebuilds the record-location and name
                       indexes from it. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016bc19b;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)&pvStack_a4;
  uVar3 = DAT_01b839d8 ^ (uint)&stack0xffffff4c;
  ExceptionList = &local_c;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (this,pathOrMode,0,0xffffffff);
  piVar7 = (int *)((int)this + 4);
  _Filename = piVar7;
  if (0xf < *(uint *)((int)this + 0x18)) {
    _Filename = (int *)*piVar7;
  }
  _File = _fopen((char *)_Filename,"rb");
  if (_File != (FILE *)0x0) {
    if (0xf < *(uint *)((int)this + 0x18)) {
      piVar7 = (int *)*piVar7;
    }
    iVar4 = FUN_00d8dd48(piVar7,local_78,uVar3);
    if (iVar4 == 0) {
      PacketBuffer_init(local_90);
      local_4._0_1_ = 0;
      local_4._1_3_ = 0;
      SerializationBuffer_resize(local_90,local_64);
      puVar5 = PacketBuffer_identity(local_90);
      pFVar10 = _File;
      iVar4 = PacketBuffer_getSize(local_90);
      iVar4 = FUN_00d8ae0b(*puVar5,1,iVar4,pFVar10);
      _fclose(_File);
      iVar6 = PacketBuffer_getSize(local_90);
      if (iVar4 != iVar6) {
        FUN_012f5a60("dataLength == dbBuffer.length()","..\\common\\common\\db\\odblookup.cpp",0x32)
        ;
      }
      Deserializer_readInteger(local_90,&local_94);
      iVar4 = 0;
      if (0 < local_94) {
        do {
          Deserializer_readInteger(local_90,(int *)&pvStack_a4);
          Deserializer_readInteger(local_90,&iStack_7c);
          Deserializer_readInteger(local_90,&iStack_a0);
          iVar2 = iStack_7c;
          iVar6 = iStack_a0;
          pvStack_9c = pvStack_a4;
          piVar7 = (int *)FUN_01537660(&pvStack_9c);
          *piVar7 = iVar2;
          iVar4 = iVar4 + 1;
          piVar7[1] = iVar6;
        } while (iVar4 < local_94);
      }
      Deserializer_readInteger(local_90,&iStack_98);
      pvStack_a4 = (void *)0x0;
      if (0 < iStack_98) {
        pvStack_9c = (void *)((int)this + 0x1c);
        do {
          uStack_30 = 0xf;
          uStack_34 = 0;
          apppcStack_44[0] = (char ***)((uint)apppcStack_44[0] & 0xffffff00);
          local_4._0_1_ = 1;
          Deserializer_readString(local_90,auStack_48);
          Deserializer_readInteger(local_90,&iStack_a0);
          ppppcVar9 = (char ****)apppcStack_44[0];
          if (uStack_30 < 0x10) {
            ppppcVar9 = apppcStack_44;
          }
          uStack_14 = 0xf;
          uStack_18 = 0;
          pvStack_28 = (void *)((uint)pvStack_28 & 0xffffff00);
          ppppcVar8 = ppppcVar9;
          do {
            cVar1 = *(char *)ppppcVar8;
            ppppcVar8 = (char ****)((int)ppppcVar8 + 1);
          } while (cVar1 != '\0');
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                    (abStack_2c,(char *)ppppcVar9,(int)ppppcVar8 - (int)((int)ppppcVar9 + 1));
          local_4._0_1_ = 2;
          piVar7 = (int *)OdbNameIndex_findOrInsertRecord(pvStack_9c,abStack_2c);
          *piVar7 = iStack_a0;
          local_4 = CONCAT31(local_4._1_3_,1);
          if (0xf < uStack_14) {
                    /* WARNING: Subroutine does not return */
            _free(pvStack_28);
          }
          uStack_14 = 0xf;
          uStack_18 = 0;
          pvStack_28 = (void *)((uint)pvStack_28 & 0xffffff00);
          local_4._0_1_ = 0;
          if (0xf < uStack_30) {
                    /* WARNING: Subroutine does not return */
            _free(apppcStack_44[0]);
          }
          pvStack_a4 = (void *)((int)pvStack_a4 + 1);
          uStack_30 = 0xf;
          uStack_34 = 0;
          apppcStack_44[0] = (char ***)((uint)apppcStack_44[0] & 0xffffff00);
        } while ((int)pvStack_a4 < iStack_98);
      }
      local_4 = 0xffffffff;
      RawBuffer_free(local_90);
    }
  }
  ExceptionList = local_c;
  return;
}

