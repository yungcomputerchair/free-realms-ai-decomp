// addr: 0x00dd1fd0
// name: Umbra_ImpRegionOfInfluence_ctor
// subsystem: common/world/scene
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Setting prototype: void * Umbra_ImpRegionOfInfluence_ctor(void * this, void * source) */

void * __thiscall Umbra_ImpRegionOfInfluence_ctor(void *this,void *source)

{
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs an Umbra::ImpRegionOfInfluence, initializes base state, sets an
                       internal type/value to 2, clears a flag, registers global data, and
                       increments a global instance counter. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0161c038;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00dd1c20(source);
  local_4 = 0;
  *(undefined ***)this = Umbra::ImpRegionOfInfluence::vftable;
  FUN_00dcf760(2);
  uVar1 = DAT_01821830;
  *(uint *)((int)this + 4) = *(uint *)((int)this + 4) & 0xfffffdff;
  FUN_00dce800(uVar1);
  _DAT_01bf90b4 = _DAT_01bf90b4 + 1;
  ExceptionList = local_c;
  return this;
}

