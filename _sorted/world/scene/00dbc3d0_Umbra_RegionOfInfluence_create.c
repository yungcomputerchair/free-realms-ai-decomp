// addr: 0x00dbc3d0
// name: Umbra_RegionOfInfluence_create
// subsystem: common/world/scene
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * Umbra_RegionOfInfluence_create(void * source) */

void * __cdecl Umbra_RegionOfInfluence_create(void *source)

{
  void *pvVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Creates or wraps an Umbra::RegionOfInfluence, allocating the public object,
                       installing its vtable, and constructing the implementation object under the
                       global Umbra lock when initialized. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0161acf8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_01bf3db4 == 0) {
    pvVar1 = (void *)FUN_00dc4220(source);
    ExceptionList = local_c;
    return pvVar1;
  }
  (**(code **)(*(int *)PTR_DAT_01b854b0 + 0x1c))(DAT_01b839d8 ^ (uint)&stack0xffffffe8);
  uStack_4 = 0;
  if (source == (void *)0x0) {
    uStack_4 = 0xffffffff;
    (**(code **)(*(int *)PTR_DAT_01b854b0 + 0x20))();
    ExceptionList = local_c;
    return (void *)0x0;
  }
  puVar2 = (undefined4 *)FUN_00dc4920(0x20);
  if (puVar2 != (undefined4 *)0x0) {
    puVar2[1] = 0xffffffff;
    puVar2[2] = 1;
    puVar2[3] = 0;
    *puVar2 = Umbra::RegionOfInfluence::vftable;
  }
  if (puVar2 + 4 != (undefined4 *)0x0) {
    Umbra_ImpRegionOfInfluence_ctor(puVar2 + 4,source);
  }
  uStack_4 = 0xffffffff;
  (**(code **)(*(int *)PTR_DAT_01b854b0 + 0x20))();
  ExceptionList = local_c;
  return puVar2;
}

