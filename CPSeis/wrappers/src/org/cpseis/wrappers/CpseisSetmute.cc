//////// DO NOT EDIT THIS FILE - it is machine generated ////////

#include "CpseisSetmute.hh"

//------------------ fortran spelling adjustments --------------------//
//------------------ fortran spelling adjustments --------------------//
//------------------ fortran spelling adjustments --------------------//

#if NEED_UNDERSCORE
#define setmute_wrap_create             setmute_wrap_create_
#define setmute_wrap_delete             setmute_wrap_delete_
#define setmute_wrap_update             setmute_wrap_update_
#define setmute_wrap_wrapup             setmute_wrap_wrapup_
#define setmute_wrap_oneset             setmute_wrap_oneset_
#define setmute_wrap_twosets            setmute_wrap_twosets_
#elif NEED_CAPITALS
#define setmute_wrap_create             SETMUTE_WRAP_CREATE
#define setmute_wrap_delete             SETMUTE_WRAP_DELETE
#define setmute_wrap_update             SETMUTE_WRAP_UPDATE
#define setmute_wrap_wrapup             SETMUTE_WRAP_WRAPUP
#define setmute_wrap_oneset             SETMUTE_WRAP_ONESET
#define setmute_wrap_twosets            SETMUTE_WRAP_TWOSETS
#endif

//----------------------- fortran prototypes -------------------------//
//----------------------- fortran prototypes -------------------------//
//----------------------- fortran prototypes -------------------------//

extern "C"
    {
    CpseisBase::ModuleCreate   setmute_wrap_create;
    CpseisBase::ModuleDestroy  setmute_wrap_delete;
    CpseisBase::ModuleUpdate   setmute_wrap_update;
    CpseisBase::ModuleWrapup   setmute_wrap_wrapup;
    CpseisBase::ModuleOneset   setmute_wrap_oneset;
    CpseisBase::ModuleTwosets  setmute_wrap_twosets;
    }

//------------------------ constructor -------------------------------//
//------------------------ constructor -------------------------------//
//------------------------ constructor -------------------------------//

CpseisSetmute::CpseisSetmute() : CpseisBase ("SETMUTE",
                                       setmute_wrap_create,
                                       setmute_wrap_delete,
                                       setmute_wrap_update,
                                       setmute_wrap_wrapup,
                                       setmute_wrap_oneset,
                                       setmute_wrap_twosets) {}

//------------------------------ end ---------------------------------//
//------------------------------ end ---------------------------------//
//------------------------------ end ---------------------------------//
