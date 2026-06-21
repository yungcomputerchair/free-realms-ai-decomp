// addr: 0x00806930
// name: SkyDefinition_Satellite_ctor
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall SkyDefinition_Satellite_ctor(undefined4 *param_1,int param_2)

{
  int *piVar1;
  
                    /* Constructs a SkyDefinition::Satellite by initializing the TintedTexture
                       base/subobject, addrefing its resource pointer, setting the Satellite
                       vftable, and copying the satellite-specific field at 0x30. */
  *param_1 = SkyDefinition::TintedTexture::vftable;
  param_1[4] = *(undefined4 *)(param_2 + 0x10);
  param_1[8] = *(undefined4 *)(param_2 + 0x20);
  param_1[9] = *(undefined4 *)(param_2 + 0x24);
  param_1[10] = *(undefined4 *)(param_2 + 0x28);
  param_1[0xb] = *(undefined4 *)(param_2 + 0x2c);
  if (param_1[4] != 0) {
    piVar1 = (int *)(param_1[4] + 4);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  *param_1 = SkyDefinition::Satellite::vftable;
  param_1[0xc] = *(undefined4 *)(param_2 + 0x30);
  return;
}

