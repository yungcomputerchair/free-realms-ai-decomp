// addr: 0x007d50f0
// name: GameUtil_CurveCatmullRomSpline_Vector4f_ctor
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GameUtil_CurveCatmullRomSpline_Vector4f_ctor(void * this, void * owner)
    */

void __thiscall GameUtil_CurveCatmullRomSpline_Vector4f_ctor(void *this,void *owner)

{
                    /* Constructor for
                       GameUtil::CurveCatmullRomSpline<SoeUtil::Math::Vector<float,4>_>; vtable
                       assignments identify the class and it stores the owner/key data pointer at
                       +4. */
  *(undefined ***)this = GameUtil::CurveInternal<SoeUtil::Math::Vector<float,4>_>::vftable;
  *(void **)((int)this + 4) = owner;
  *(undefined ***)this = GameUtil::CurveCatmullRomSpline<SoeUtil::Math::Vector<float,4>_>::vftable;
  return;
}

