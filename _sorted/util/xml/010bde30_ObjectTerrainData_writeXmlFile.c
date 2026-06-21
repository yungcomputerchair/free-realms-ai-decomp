// addr: 0x010bde30
// name: ObjectTerrainData_writeXmlFile
// subsystem: common/util/xml
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool ObjectTerrainData_writeXmlFile(void * this) */

bool __fastcall ObjectTerrainData_writeXmlFile(void *this)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  void *pvVar4;
  void *local_4c;
  undefined1 *puStack_48;
  int local_44;
  
                    /* Writes ObjectTerrainData XML, including room/object entries, ambient sound
                       tracks, and ambient random effects, then saves the document. Evidence:
                       referenced strings include ObjectTerrainData, DataName, SkyFileName,
                       AmbientSoundTrack, and AmbientRandomEffect. */
  local_44 = 0xffffffff;
  puStack_48 = &LAB_01648cc5;
  local_4c = ExceptionList;
  ExceptionList = &local_4c;
  FUN_00d51ba0(DAT_01b839d8 ^ (uint)&stack0xffffff00);
  local_44 = 0;
  for (puVar1 = *(undefined4 **)((int)this + 0xc); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)puVar1[0x1b]) {
    pvVar4 = Mem_Alloc(0x50);
    local_44._0_1_ = 1;
    if (pvVar4 == (void *)0x0) {
      pvVar4 = (void *)0x0;
    }
    else {
      pvVar4 = (void *)FUN_00d52e70();
    }
    local_44 = (uint)local_44._1_3_ << 8;
    FUN_00d53030(&DAT_0180c470,*puVar1);
    TiXmlElement_SetAttribute(pvVar4,"DataName",(char *)puVar1[2]);
    TiXmlElement_SetAttribute(pvVar4,"SkyFileName",(char *)puVar1[6]);
    TiXmlElement_SetAttribute(pvVar4,"MinimapTileset",(char *)puVar1[10]);
    FUN_00d53030("RoomType",puVar1[0x11]);
    TiXmlElement_SetAttribute(pvVar4,"AtlasName",(char *)puVar1[0xe]);
    for (puVar2 = (undefined4 *)puVar1[0x13]; puVar2 != (undefined4 *)0x0;
        puVar2 = (undefined4 *)puVar2[2]) {
      pvVar4 = Mem_Alloc(0x50);
      local_44._0_1_ = 2;
      if (pvVar4 != (void *)0x0) {
        FUN_00d52e70();
      }
      local_44 = (uint)local_44._1_3_ << 8;
      FUN_00d53030("TrackId",*puVar2);
      FUN_00d53030("SoundDefinitionId",puVar2[1]);
      TiXmlNode_LinkEndChild();
    }
    for (puVar2 = (undefined4 *)puVar1[0x17]; puVar2 != (undefined4 *)0x0;
        puVar2 = (undefined4 *)puVar2[6]) {
      pvVar4 = Mem_Alloc(0x50);
      local_44._0_1_ = 3;
      if (pvVar4 != (void *)0x0) {
        FUN_00d52e70();
      }
      local_44 = (uint)local_44._1_3_ << 8;
      FUN_00d53030("CompositeEffectDefId",*puVar2);
      FUN_00d53080("MinDistance",(double)(float)puVar2[1]);
      FUN_00d53080("MaxDistance",(double)(float)puVar2[2]);
      FUN_00d53080("MinFrequency",(double)(float)puVar2[3]);
      FUN_00d53080("MaxFrequency",(double)(float)puVar2[4]);
      FUN_00d53030("OnlyPlaceInFrontOfCamera",*(undefined1 *)(puVar2 + 5));
      FUN_00d53030("PlaceOnGround",*(undefined1 *)((int)puVar2 + 0x15));
      TiXmlNode_LinkEndChild();
    }
    TiXmlNode_LinkEndChild();
  }
  cVar3 = FUN_00d51ec0();
  if (cVar3 != '\0') {
    *(undefined1 *)((int)this + 100) = 0;
    local_44 = 0xffffffff;
    FUN_00796020();
    ExceptionList = local_4c;
    return true;
  }
  local_44 = 0xffffffff;
  FUN_00796020();
  ExceptionList = local_4c;
  return false;
}

