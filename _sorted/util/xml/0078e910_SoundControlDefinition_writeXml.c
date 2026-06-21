// addr: 0x0078e910
// name: SoundControlDefinition_writeXml
// subsystem: common/util/xml
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Setting prototype: bool SoundControlDefinition_writeXml(void * this, void * element) */

bool __fastcall SoundControlDefinition_writeXml(void *this,void *element)

{
  int iVar1;
  float *pfVar2;
  char cVar3;
  undefined4 uVar4;
  int extraout_EAX;
  void *pvVar5;
  void *this_00;
  undefined1 local_c0 [116];
  void *local_4c;
  undefined1 *puStack_48;
  undefined4 local_44;
  
                    /* Serializes sound control settings to XML, writing playback/control attributes
                       and SoundDefinition children for playlist entries. Evidence: strings include
                       controlType, playListType, volume, clipDistance, delayBetweenSounds, and
                       SoundDefinition/fileName. */
  local_44 = 0xffffffff;
  puStack_48 = &LAB_0155a98e;
  local_4c = ExceptionList;
  ExceptionList = &local_4c;
  cVar3 = FUN_007c9dd0();
  if (cVar3 == '\0') {
    ExceptionList = local_4c;
    return false;
  }
  FUN_00d53030("controlType",*(undefined4 *)((int)this + 0x150));
  if (*(int *)((int)this + 0x14c) == 0) {
    uVar4 = 2;
  }
  else {
    uVar4 = *(undefined4 *)(*(int *)((int)this + 0x14c) + 0x50);
  }
  FUN_00d53030("playListType",uVar4);
  FUN_00d53030("playbackType",*(undefined4 *)((int)this + 0x154));
  FUN_00d53030("category",*(undefined4 *)((int)this + 0x15c));
  FUN_00d53030("subcategory",*(undefined4 *)((int)this + 0x160));
  if (*(float *)((int)this + 0x174) < _DAT_0175b420) {
    FUN_00d53080("volume",(double)*(float *)((int)this + 0x174));
  }
  if (DAT_01762a30 < *(float *)((int)this + 0x178)) {
    FUN_00d53080("volumeOffset",(double)*(float *)((int)this + 0x178));
  }
  if (DAT_01762a30 < *(float *)((int)this + 0x16c)) {
    FUN_00d53080("attenuationDistance",(double)*(float *)((int)this + 0x16c));
  }
  FUN_00d53080("clipDistance",(double)*(float *)((int)this + 0x170));
  if (DAT_01762a30 < *(float *)((int)this + 0x188)) {
    FUN_00d53080("fadeTime",(double)*(float *)((int)this + 0x188));
  }
  if (DAT_01762a30 < *(float *)((int)this + 0x18c)) {
    FUN_00d53080("fadeOutTime",(double)*(float *)((int)this + 0x18c));
  }
  FUN_00d53030("priority",*(undefined4 *)((int)this + 0x158));
  if (*(float *)((int)this + 0x17c) != _DAT_0175b420) {
    FUN_00d53080("rateMultiplier",(double)*(float *)((int)this + 0x17c));
  }
  if (*(float *)((int)this + 0x180) != DAT_01762a30) {
    FUN_00d53080("rateMultiplierOffset",(double)*(float *)((int)this + 0x180));
  }
  FUN_00d53030("loopCount",*(undefined4 *)((int)this + 0x164));
  iVar1 = *(int *)((int)this + 0x168);
  SoundControlDefinition_initDefaults(local_c0);
  if (iVar1 != *(int *)(extraout_EAX + 0x10)) {
    FUN_00d53030("loadTimeoutMS",*(undefined4 *)((int)this + 0x168));
  }
  if (*(float *)((int)this + 400) != _DAT_0175b420) {
    FUN_00d53080("roomTypeScalar",(double)*(float *)((int)this + 400));
  }
  if (*(char *)((int)this + 0x194) != '\x01') {
    FUN_00d53030("attenuateReverbWithDistance",*(char *)((int)this + 0x194));
  }
  if (0 < *(int *)((int)this + 0x1a4)) {
    FUN_00d53030("maxConcurrentSounds",*(int *)((int)this + 0x1a4));
  }
  iVar1 = *(int *)((int)this + 0x14c);
  if (DAT_01762a30 < *(float *)(iVar1 + 0x54)) {
    FUN_00d53080("delayBetweenSounds",(double)*(float *)(iVar1 + 0x54));
  }
  if (DAT_01762a30 < *(float *)(iVar1 + 0x58)) {
    FUN_00d53080("delayBetweenSoundsOffset",(double)*(float *)(iVar1 + 0x58));
  }
  for (pfVar2 = *(float **)(iVar1 + 0xc); pfVar2 != (float *)0x0; pfVar2 = (float *)pfVar2[6]) {
    pvVar5 = Mem_Alloc(0x50);
    this_00 = (void *)0x0;
    local_44 = 0;
    if (pvVar5 != (void *)0x0) {
      this_00 = (void *)FUN_00d52e70();
    }
    local_44 = 0xffffffff;
    TiXmlElement_SetAttribute(this_00,"fileName",(char *)pfVar2[5]);
    if (*pfVar2 != DAT_01762a30) {
      FUN_00d53080("weight",(double)*pfVar2);
    }
    if (pfVar2[1] != DAT_01762a30) {
      FUN_00d53080("timeOffset",(double)pfVar2[1]);
    }
    TiXmlNode_LinkEndChild();
  }
  ExceptionList = local_4c;
  return true;
}

