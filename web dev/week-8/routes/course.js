const { Router } = require("express");
const courseRouter = Router();

courseRouter.post("/purchases", function(req, res) {
    res.json({
        message: "signup endpoint"
    });
});

courseRouter.post("/preview", function(req, res) {
    res.json({
        message: "signup endpoint"
    });
});

module.exports = {
    courseRouter: courseRouter
};
