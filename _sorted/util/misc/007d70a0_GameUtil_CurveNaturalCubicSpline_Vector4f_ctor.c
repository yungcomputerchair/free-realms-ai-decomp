// addr: 0x007d70a0
// name: GameUtil_CurveNaturalCubicSpline_Vector4f_ctor
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GameUtil_CurveNaturalCubicSpline_Vector4f_ctor(void * this, void * owner)
    */

void __thiscall GameUtil_CurveNaturalCubicSpline_Vector4f_ctor(void *this,void *owner)

{
                    /* Constructor for
                       GameUtil::CurveNaturalCubicSpline<SoeUtil::Math::Vector<float,4>_>; vtable
                       assignments identify the class and it initializes three embedded
                       SoeUtil::Array<Vector4f> members. */
  *(undefined ***)this = GameUtil::CurveInternal<SoeUtil::Math::Vector<float,4>_>::vftable;
  *(void **)((int)this + 4) = owner;
  *(undefined ***)this = GameUtil::CurveNaturalCubicSpline<SoeUtil::Math::Vector<float,4>_>::vftable
  ;
  *(undefined ***)((int)this + 8) = SoeUtil::Array<SoeUtil::Math::Vector<float,4>,0,1>::vftable;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined ***)((int)this + 0x18) = SoeUtil::Array<SoeUtil::Math::Vector<float,4>,0,1>::vftable;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined ***)((int)this + 0x28) = SoeUtil::Array<SoeUtil::Math::Vector<float,4>,0,1>::vftable;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  return;
}

