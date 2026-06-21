// addr: 0x010707a0
// name: HousingFixtureRef_ctor
// subsystem: common/client/selfobject
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * HousingFixtureRef_ctor(void * this, uint a_, uint b_, void * source) */

void * __thiscall HousingFixtureRef_ctor(void *this,uint a_,uint b_,void *source)

{
  undefined4 uVar1;
  
                    /* Initializes a housing/fixture reference-like record with an embedded
                       CharacterGuid array and stores two arguments plus an optional value copied
                       from source+4. Housing fixture context is inferred from adjacent housing
                       packet code. */
  uVar1 = 0;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined ***)((int)this + 0x14) =
       SoeUtil::Array<SoeUtil::StrongType<unsigned___int64,SoeUtilSignatureCharacterGuid,0>,0,1>::
       vftable;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(uint *)((int)this + 0x30) = a_;
  *(uint *)((int)this + 0x34) = b_;
  if (source != (void *)0x0) {
    uVar1 = *(undefined4 *)((int)source + 4);
  }
  *(undefined4 *)((int)this + 0x38) = uVar1;
  return this;
}

